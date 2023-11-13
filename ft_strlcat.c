/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:51:17 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/13 15:25:27 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	src_index;
	size_t	space_for_src;

	dstlen = 0;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	while (dst[dstlen] != '\0')
	{
		dstlen++;
	}
	if (dstlen > dstsize)
		return (dstsize + srclen);
	space_for_src = dstsize - dstlen - 1;
	src_index = 0;
	while (src[src_index] != '\0' && src_index < space_for_src)
	{
		dst[dstlen + src_index] = src[src_index];
		src_index++;
	}
	dst[dstlen + src_index] = '\0';
	return (dstlen + srclen);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	d[70] = "Hello, you are doing alright";
	char	s[] = ", yes it is true";
	int	t = 50;

	printf("%zu\n", ft_strlcat(d, s, t));
	printf("%s\n", d);

	char	dx[70] = "Hello, you are doing alright";
	char	sx[] = ", yes it is true";
	int		tx = 50;

	int		a = strlcat(dx, sx, tx);

	printf("%d\n", a);
	printf("%s\n", dx);

}