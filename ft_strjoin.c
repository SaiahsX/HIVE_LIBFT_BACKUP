/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:32:23 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/23 14:03:57 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function allocates enough memory and returns a new string which is
a result of the conctenation of s1 an s2.	*/
/*	For this function, the variable types of the strings are typecasted &
their lenghts determined via ft_strlen	*/
/*	Both source lengths + 1 will serve as the count for the memory allocation
Then make checks if no memory was not allocted and return Null if none	*/
/*	A new variable 'result' is initalized with the allocate memory	*/
/*	ft_strlcat was used to concartenate the strings and equated to 'result'	*/
/*	return value is the pointer to 'result', the new string	*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*source;
	char	*dest;
	size_t	dest_len;
	size_t	source_len;
	char	*result;

	source = (char *)s2;
	dest = (char *)s1;
	if (!s1 || !s2)
		return (NULL);
	dest_len = ft_strlen(dest);
	source_len = ft_strlen(source);

	result = (char *) malloc ((dest_len + source_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result = (char *)ft_strlcat(dest, source, (dest_len + source_len + 1));
	return (dest);
}

/* 
#include <stdio.h>

int	main(void)
{
	char	d[] = "";
	char	s[] = "";
	
	printf("%s\n", ft_strjoin(d, s));
} */