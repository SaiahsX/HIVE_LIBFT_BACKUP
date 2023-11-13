/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:12:52 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/13 13:37:15 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function copies  'len' bytes from string 'src' to string 'dst'.
The two strings may overlap; 
the copy is always done in a non-destructive manner. */
/* This fuunction is written such that if the 2 strings overlap, 
it reverses the direction of copy.
This is done first by specifying a condition 'if dst > src' and
a switch 'dir' is used to influence the direction of copying.*/
/* This function imittes the behaviour of the standard C library function
'memmove'*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	const char		*org;
	size_t			i;
	int				dir;

	dest = dst;
	org = (char *)src;
	i = 0;
	dir = 1;
	if (dst > src)
	{
		i = len - 1;
		dir = -1;
	}
	while (len-- > 0)
	{
		dest[i] = org[i];
		i += dir;
	}
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char	str[]  = "start stop";
	char	str1[] = "start stop";

	printf("%s\n", ft_memmove(str, str + 6, 4));
	printf("%s\n", memmove(str1, str1 + 6, 4));
}
*/