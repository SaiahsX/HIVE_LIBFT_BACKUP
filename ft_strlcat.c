/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:51:17 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/10 17:36:05 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (i < dstsize && dst[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && i < dstsize)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (i);
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	len_src = 0;
	s = (char *)src;
	while (dst[len_dst] != '\0')
		len_dst++;
	while (s[len_src] != '\0')
		len_src++;
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
*/
#include <stdio.h>

int	main(void)
{
	char	d[21] = "Hello_";
	char	s[10] = "";
	int	t = 20;

	printf("%zu\n", ft_strlcat(d, s, t));
	printf("%s\n", d);

	char	dx[21] = "Hello_";
	char	sx[10] = "";
	int	tx = 20;

	int a = strlcat(dx, sx, tx);

	printf("%d\n", a);
	printf("%s\n", dx);

}