/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:57:00 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/25 17:24:50 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;

	result = (char *) malloc (end - start + 2);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, (end - start + 2));
	return (result);
}
/* 
#include <stdio.h>

int	main()
{
	char	source[] = "Helsinki";
	char	set[] = "Helki";

	printf("%s\n", ft_strtrim(source, set));
} */