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

/*	This function contgiously allocates enough memory for 'count'
objects that are the 'size' bytes of memory each and returns a pointer to 
the allocated memory.	*/
/*	In this function, allocated memory is filled with bytes value of zero	*/
/*	This means an opportunity to call our premade function ft_bzero	*/
/*	To start, a void pointer to a variable 'pntr' is declared	*/
/*	This variable will be used to calculate malloc	*/
/*	In this function, some protective conditions are specified:
1.	check if the count * size exceed max value and return a NULL.
	.	'max_num / count' calculates the maximum number of elements that could 
	be allocated without overflowing the size_t data type.
	.	'max_num / count < size' checks whether the calculated maximum number 
	of elements, when multiplied by size, would result in an overflow.
	.	count && ... ensures that both count is non-zero and the potential 
	overflow condition is checked.
2.	After have memory allocated to 'pntr' the void variable 'pntr'. 
Check if its a Null & return a NULL.	*/
/*	To conclude this function, ft_bzero is used to 
zero all allocated memory bytes.	*/
/*	This function imitates the behaviour of the standard Clibrary funtion
calloc.	*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pntr;
	size_t	byte_size;
	size_t	max_num;

	max_num = SIZE_MAX;
	byte_size = count * size;
	if (count && (max_num / count) < size)
		return (NULL);
	pntr = malloc(byte_size);
	if (pntr == NULL)
		return (NULL);
	ft_bzero(pntr, (byte_size));
	return (pntr);
}

//The code below is replaced by the code above due to leak issues, compare  ln45 with ln64
// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*pntr;
// 	size_t	byte_size;

// 	if (!count || !size)
// 		return (ft_calloc(1, 1));

// 	byte_size = count * size;
// 	if (byte_size / count != size)
// 		return (0);

// 	pntr = malloc(byte_size);
// 	if (pntr == 0)
// 		return (0);

// 	ft_bzero(pntr, (count * size));
// 	return (pntr);
// }
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
