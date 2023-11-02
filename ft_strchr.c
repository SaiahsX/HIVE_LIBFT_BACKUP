/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:48:33 by oadewumi          #+#    #+#             */
/*   Updated: 2023/10/31 16:37:58 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function finds the first occurence of a character 'int c' 
(converted to char by typecasting '(char)c'or just plain converion) 
in the string pointed to by 'str'.*/
/* The null terminator character is considered part of the string*/
/* The return value is a pointer to the located character or 
Null if the character does not appear in the string*/
/* The return value is the first occurence of the character 
and every other character afterwards */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char) c)
			return ((char *) str + i);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	s[] = "and he will set up a kingdom";
	int	i = 'z';
	printf("%s\n", ft_strchr(s, i));
}
*/