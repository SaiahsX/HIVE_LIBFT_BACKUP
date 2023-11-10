/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:10:21 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/10 14:48:29 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int		main(void)
{
	char	d[] = "12345";
	
	const char	s[] = "you can do it!";
	int a = ft_strlcpy(d, s, 0);
	printf("%d\n", a);
	printf("%s\n", d);
	
	char	dx[] = "12345";
	
	const char	sx[] = "you can do it!";
	int ax = strlcpy(dx, sx, 0);
	printf("%d\n", ax);
	printf("%s\n", dx);
}