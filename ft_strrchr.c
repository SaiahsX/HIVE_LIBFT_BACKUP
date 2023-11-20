/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:39:28 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 18:22:46 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is similar to ft_strchr, except 
it locates the last occurence of 'c' in the string pointed to by 'str'*/
/* The return value is the pointer to the 
address of the last occurence of 'c' and
 everything afterwards is also printed*/
/* In this function, i used the behaviour of ft_strlen 
to count to the end of the string and searched backwards*/
/* This function imitates the standard C library funtion strrchr*/

char	*ft_strrchr(const char *str, int c)
{
	char	x;
	int		count;

	x = c;
	count = 0;
	while (str[count])
	{
		count++;
	}
	while (str[count] >= 0)
	{
		if (str[count] == x)
			return ((char *)str + count);
		count--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s;
	int		i; 

	s = "and he will set up a kingdom";
	i = 'i';

	printf("%s\n", ft_strrchr(s, i));
}
*/