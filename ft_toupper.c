/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:29:20 by oadewumi          #+#    #+#             */
/*   Updated: 2023/10/30 17:42:27 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks the character returned to'int c' as an ASCII character
then it converts the charcter to uppercase if its a lowercase */
/* This function imitates the standard C library funtion 'toupper'*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c -32;
	}
	return (c);
}
/*
#include<unistd.h>

int main(void)
{
	int			x;
	char	retur;

	x = 'q';
	retur = ft_toupper(x);
	write(1, &retur, 1);
}
*/
