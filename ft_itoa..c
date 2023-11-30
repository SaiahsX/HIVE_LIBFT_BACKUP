/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa..c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:53:04 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/30 15:28:23 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_int(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	s;
	int		count;
	char	*str;

	s = n;
	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	count = ft_count_int(n);
	str = (char *) ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (0);
	if (s < 0)
	{
		s = -s;
		str[0] = '-';
	}
	while (s && count != 0)
	{
		str[count - 1] = (s % 10) + '0';
		s = s / 10;
		count--;
	}
	return (str);
}

int	main(void)
{
	int	test;

	test = -01;
	printf("%s\n", ft_itoa(test));
}