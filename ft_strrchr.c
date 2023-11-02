/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:39:28 by oadewumi          #+#    #+#             */
/*   Updated: 2023/10/31 18:18:23 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	x;
	int		count;

	x = c;
	count = 0;
	while (str[count])
	{
		count++;
	}
	while (str[count] >= 0)
	{
		if (str[count] == x)
			return ((char *)str + count);
		count--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s;
	int		i; 

	s = "and he will set up a kingdom";
	i = 'i';

	printf("%s\n", ft_strrchr(s, i));
}
*/