/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:14:27 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/16 17:57:09 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ret_output(const char *str, int polarity)
{
	size_t	output;
	int		indx;

	output = 0;
	indx = 0;
	while (ft_isdigit(str[indx]))
	{
		if (output > FT_LONG_MAX / 10
			|| (output == FT_LONG_MAX / 10 && str[indx] > FT_LONG_MAX % 10))
		{
			if (polarity > 0)
				return (-1);
			else
				return (0);
		}
		output = output * 10 + (str[indx] - '0');
		indx++;
	}
	return (output);
}

int	ft_atoi(const char *str)
{
	size_t	output;
	int		indx;
	int		polarity;

	output = 0;
	indx = 0;
	polarity = 1;
	while (str[indx] == 32 || (str[indx] >= 9 && str[indx] <= 13))
		indx++;
	if (str[indx] == '-' || str[indx] == '+')
	{
		if (str[indx] == '-')
			polarity *= -1;
		indx++;
	}
	output = ft_ret_output(str + indx, polarity);
	return (output * polarity);
}
/* 
#include <stdio.h>

int	main(int ac, char **av)
{
	int	mine;
	int	org;
	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		org = atoi(av[1]);
		printf("mine: %d | org: %d\n", mine, org);
	}
	return (0);
} */