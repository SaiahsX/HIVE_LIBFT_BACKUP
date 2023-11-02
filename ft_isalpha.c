/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:12:40 by oadewumi          #+#    #+#             */
/*   Updated: 2023/10/30 16:20:00 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks that the returned 
character to the argument 'alf' is an alphabet*/
/* It returns 1 if it is true and 0 if its false */
/* This function imitates the standard Clibrary function 'isalpha' */
int	ft_isalpha(int alf)

{
	if ((alf >= 'A' && alf <= 'Z') || (alf >= 'a' && alf <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*

#include <stdio.h>

int	main(void)
{
	int	c = '2';
	printf("%d", ft_isalpha(c));
}
*/
