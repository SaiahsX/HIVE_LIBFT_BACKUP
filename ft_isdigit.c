/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:01:21 by oadewumi          #+#    #+#             */
/*   Updated: 2023/10/30 16:36:12 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function checks if the argument 'num' is all digits,
then it returns a value of 1 if that is true and 0 if that is false.
*/
/* This fuction is to imitate the behaviour of the 
standard C library function 'isdigit'
*/
int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	return (0);
}
/*

#include <stdio.h>

int main(void)
{
	int	nu = '9';
	int c = ft_isdigit(nu);
	printf("%d\n", c);
}
*/
