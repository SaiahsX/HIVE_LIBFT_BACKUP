/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:31:21 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/21 17:53:10 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pntr;
	size_t	byte_size;

	if (!count || !size)
		return (ft_calloc(1, 1));

	byte_size = count * size;
	if (byte_size / count != size)
		return (0);

	pntr = malloc(byte_size);
	if (pntr == 0)
		return (0);

	ft_bzero(pntr, (count * size));
	return (pntr);
}
/* 
#include <stdio.h>

int	main(void)
{
	size_t		i;
	char	*rnd;
	size_t	count;

	count = 429;
	i = 0;
	rnd = ft_calloc(count, sizeof(rnd));
	//rnd = ft_calloc(count, 0);
	while (i < count)
	{
		printf("%u", rnd[i]);
		i++;
	}
	free(rnd);

	printf("\n");


	size_t		ix;
	char	*rndx;

	ix = 0;
	rndx = calloc(count, sizeof(rndx));
	//rndx = calloc(count, 0);
	while (ix < count)
	{
		printf("%u", rndx[ix]);
		ix++;
	}
	free(rndx);

	printf("\n");
	


	// if (rnd)
	// 	printf("calloc has allocated\n");
	// else
	// 	printf("nothing has been allocated");

	// rnd = calloc(10, 1);
	// char	str2[] = "Hello";
	// ft_strlcat (rnd, str2, 10);
	// printf("rnd + str2 is now %s\n", rnd);
} */