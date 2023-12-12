/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:05:29 by oadewumi          #+#    #+#             */
/*   Updated: 2023/12/12 16:50:37 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function returns the the last node of the list.	*/
/*	To begin, we need to check if there is no list, then return NUll.	*/
/*	We need to iterate/loop through the list whith the condition;
while lst->next!= NULL	*/
/*	lst will be equal to the reference of the prior lst until NULL.	*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*one;
	t_list	*last_node;
	t_list	*temp;
// This list 'temp' is a receptacle for saving the value of list 'one'.
// This is used for freeing the allocated memories.

	one = NULL;
	one = ft_lstnew("Taneli");
	one->next = ft_lstnew("empt");
	one->next->next = ft_lstnew("oops");
	one->next->next->next = NULL;
	last_node = ft_lstlast(one);
	if (last_node != NULL)
		printf("data in the last node = %s\n", last_node->content);
	else
		printf("Linked list is empty.\n");
//Freeing the allocated memory for the linked list nodes
	while (one != NULL)
	{
		temp = one;
		one = one->next;
		free(temp);
	}
} */
