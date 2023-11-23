/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:32:23 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/23 13:13:30 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*source;
	char	*dest;
	size_t	dest_len;
	size_t	source_len;
	char	*result;

	source = (char *)s2;
	dest = (char *)s1;
	dest_len = ft_strlen(dest);
	source_len = ft_strlen(source);

	result = (char *) malloc ((dest_len + source_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result = (char *)ft_strlcat(dest, source, (dest_len + source_len + 1));
	return (dest);
}

/* 
#include <stdio.h>

int	main(void)
{
	char	d[] = "Hello_";
	char	s[] = "world.";
	
	printf("%s\n", ft_strjoin(d, s));
} */