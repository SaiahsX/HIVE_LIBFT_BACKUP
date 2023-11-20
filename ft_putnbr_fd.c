/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:45:35 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 16:49:44 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function uses recursive method to convert integer values to ASCII 
character and print(write) it out.	*/
/*	In this function, the min int (-2147483648) to be printed exclusively.	*/
/*	Else, This function takes care of every value 
up to max int (2147483647).	*/
/*	If there is a negative value, the '-' sign is printed out exclusively
because to iterate we use need to also convert the int to +ve for the 
recursion to write out the converted result	*/
/*	Recursion in the case works in a way that it splits the int via
division (/) & iterates to the first int digit which is then converted to 
ASCII xter, then prints & recursion works its way back up via use 
of % opertion for converting the next digit and prints until it gets
to the top. 	*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0 && n > -2147483648)
	{
		ft_putchar_fd(('-'), 1);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_fd((n + '0'), 1);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		c = n % 10 + '0';
		ft_putchar_fd(c, 1);
	}
}
/* 
int	main(void)
{
	int	input1;
	int	input2;
	int	input3;
	int	input4;

	input1 = -214743648;
	ft_putnbr_fd(input1, 1);
	ft_putchar_fd(('\n'), 1);

	input2 = -9;
	ft_putnbr_fd(input2, 1);
	ft_putchar_fd(('\n'), 1);

	input3 = 765;
	ft_putnbr_fd(input3, 1);
	ft_putchar_fd(('\n'), 1);

	input4 = 2147483647;
	ft_putnbr_fd(input4, 1);
	ft_putchar_fd(('\n'), 1);

	return (0);
} */