/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:12:00 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/06 15:22:52 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function copies 'n' bytes from memory area 'src' to memory area 'dst'.*/
/* if the bytes in the memory of src and dst overlap, use function 'memmove'*/
/* the *restrict is not used in the arg because it causes some complications*/
/* void *dst is converted to unsigned char *dest 
&& const void *src is converted to const char *org */
/* in case of null inputs, it was handled by the first 'if' statement*/
/* The return value is the original value of dst*/

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	const char		*org;

	dest = dst;
	org = src;
	i = 0;
	if (!dest && !org)
		return (0);
	while (i < n)
	{
		dest[i] = org[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	s1[] = "Adew";
	unsigned char 	s2[] = "oluwa";
	
	printf("%s\n", ft_memcpy(s1, s2, 3));
}
*/