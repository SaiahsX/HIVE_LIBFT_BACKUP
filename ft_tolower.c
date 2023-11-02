/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:53 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/02 13:07:28 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks the character returned to'int c' as an ASCII character
then it converts the charcter to lowercase if its an uppercase */
/* This function imitates the standard C library funtion 'tolower'*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}
/*
#include<unistd.h>

int main(void)
{
	int			x;
	char	retur;

	x = 'A';
	retur = ft_tolower(x);
	write(1, &retur, 1);
	write(1, "\n", 1);
}
*/
