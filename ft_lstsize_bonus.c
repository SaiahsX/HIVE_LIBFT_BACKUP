/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:27:59 by oadewumi          #+#    #+#             */
/*   Updated: 2023/12/11 16:11:33 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function, unlike normal strlen function, we do not have an index 
counter but we just have an int counter variable log called 'count'.	*/
/*	The first thing we want to check for is if there is no lst.
-	this should return an integer zero.	*/
/*	The next step is a loop to count condition, while the next refernce
is not equal to NULL.
-	This should loop and count the number it goes into the loop until
	it encounters NULL in the net reference.	*/
/*	The return int value is 'count'	*/


#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}

/* #include <stdio.h>

// a t_list node pointer (*one) is created to test the above function, 
// one is refered to a new node and on and on until we indicated a NULL.
int	main(void)
{
	t_list	*one;

	one = ft_lstnew("");
	one->next = ft_lstnew("empt");
	one->next->next = ft_lstnew("oops");
	one->next->next->next = NULL;

	int i = ft_lstsize(one);
	printf("i = %i", i);
	free(one);
} */
