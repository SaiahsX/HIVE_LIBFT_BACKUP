/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:51:17 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/10 19:35:12 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*
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
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	l_dst;
	size_t	res;
	size_t	l_src;
	size_t	i;

	l_dst = 0;
	l_src = 0;
	s = (char *)src;
	while (dst[l_dst] != '\0')
		l_dst++;
	while (s[l_src] != '\0')
		l_src++;
	res = 0;
	i = 0;
	if (size > l_dst)
		res = l_src + l_dst;
	else
		res = l_src + size;
	while (s[i] && (l_dst + 1) < size)
	{
		dst[l_dst] = s[i];
		l_dst++;
		i++;
	}
	dst[l_dst] = '\0';
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char	d[] = "Hello, you are doing alright";
	char	s[] = ", yes it is true";
	int	t = 20;

	printf("%zu\n", ft_strlcat(d, s, t));
	printf("%s\n", d);

	char	dx[] = "Hello, you are doing alright";
	char	sx[] = ", yes it is true";
	int		tx = 20;

	int		a = strlcat(dx, sx, tx);

	printf("%d\n", a);
	printf("%s\n", dx);

}