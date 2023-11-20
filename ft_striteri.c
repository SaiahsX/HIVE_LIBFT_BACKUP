/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:31:37 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 17:12:55 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function introduces a concept of having a function as an argument.	*/
/*	The purpose of the function (*f) in the argument is to iterate through the 
string pointed to (*s). We check if 's' or 'f' is null then returns null.	*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/* 
#include <stdio.h>

void	print_index_and_char(unsigned int index, char *character)
{
	printf("Index: %u, Character: %c\n", index, *character);
}

int	main(void)
{
	char	str[] = "tetragrammaton";

	ft_striteri(str, print_index_and_char);
	printf("%s\n", str);
} */

