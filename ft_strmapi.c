/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:05:02 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/29 19:35:17 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function shares a little simiilarity with my function ft_striteri.	*/
/*	This function apples the function 'f' to each character of the string 's'
 and passing its index as the first argument to create a new string with
 memory allocated. Hence, a new result from successive application of 'f'	*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*newstr;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen ((char *)s);
	if (!s || !f)
		return (NULL);
	newstr = (char *) malloc ((s_len +1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (s[i] != '\0')
	{
		newstr[i] = f (i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/* 
#include <stdio.h>


char	print_index_and_char(unsigned int index, char character)
{
	//printf("Index: %u, Character: %c\n", index, character);
	printf("My inner function: Idx = %u and Xter: %c\n", index, character);
	//return (character - 32);
	return (1);
}

int	main(void)
{
	char	str[] = "tetragrammaton";

	ft_strmapi(str, print_index_and_char);
	printf("%s\n", str);
} */