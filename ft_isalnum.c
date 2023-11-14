/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:20:48 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/14 15:35:36 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function checks if the argument 'an' is all numbers or digits,
then it returns a value of 1 if that is true and 0 if that is false.	*/
/*	This fuction is to imitate the behaviour of the 
standard C library function 'isalnum'.	*/

int	ft_isalnum(int an)
{
	if ((an >= 'A' && an <= 'Z') || (an >= 'a' && an <= 'z'))
	{
		return (1);
	}
	if (an >= '0' && an <= '9')
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char	a = '9';
	char	b = 'A';
	char	c = '(';

	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
}
*/
