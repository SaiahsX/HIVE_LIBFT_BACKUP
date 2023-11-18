/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:45:35 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/18 19:29:37 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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