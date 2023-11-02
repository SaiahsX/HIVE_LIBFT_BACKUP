/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:51:54 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/02 13:06:12 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function copies the 'int c'(type casted to an unsigned char) to 
the first 'len' characters of the string pointed to by the argument 'b' */
/* This functions imitates the standard Clibrary function 'void *memset */
/* void *b is an undeclared argument, 
hence an Unsigned char was declared to dereference/assiged to it */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) b;
	while (i < len)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "we live in a beautiul world";
	int	sub;

	sub = '@';
//	printf("%s\n", ft_memset(str + 3, sub, 4));
//	printf("%s\n", str);
	printf("%s\n", ft_memset(str, sub, 5));
//	printf("%s\n", ft_memset(str + 7, sub, 5));
//	printf("%s\n", ft_memset(str + 9, sub, 5));
	printf("%s\n", memset(str, sub, 5));
}
*/
