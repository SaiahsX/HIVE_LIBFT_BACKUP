/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:19:18 by oadewumi          #+#    #+#             */
/*   Updated: 2023/10/31 20:22:03 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *src, const char *dest, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (src[i] != '\0' || dest[i] != '\0'))
	{
		if (src[i] != dest[i])
		{
			return ((unsigned char) src[i] - (unsigned char) dest[i]);
		}
		i++;
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	unsigned int n = 10;
	char s1[50] = "seunAdEwumi";
	char s2[50] = "seunAdewumi";
	int i = ft_strncmp(s1, s2, n);
	printf("%d\n", i);
}
*/