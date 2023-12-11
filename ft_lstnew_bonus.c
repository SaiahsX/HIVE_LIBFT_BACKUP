/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:06:30 by oadewumi          #+#    #+#             */
/*   Updated: 2023/12/11 13:19:10 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function is about creating a new node for a linked list.	
	Linked list consist of nodes where each node contains 2 parts:
	The data itself & a refrnce (or pointer) to the next node in the sequence.
	This way, the elements in a linked list are not necessarily stored in 
	contigous memory locations, unlike arrays. Instead, 
	they are connected via pointers.
	The first node in a llinked list is called the Head & the last node 
	typically pointss to NULL, indicating the end of the list.
	`void *content`: A pointer to the content that will be stored 
	in the new node.
	`t_list *`: A pointer to the newly created node. 
	If memory allocation fails, it returns `NULL`	*/

/*	Description:
- The function allocates memory for a new_node using `malloc`.
- Assigns the given `content` to the `content` field of the new node.
- Sets the `next` pointer of the new node to `NULL`.
- Returns a pointer to the newly created node. If memory allocation fails,
it returns `NULL`.	*/

/*	'new_node -> content' can also be written as (*new_node).content	*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc (sizeof(t_list));
	if (!new_node)
		return (0);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

/* #include <stdio.h>

//when declaring a struct node t_list	tmp2, and we want the new node to 
// point to the previous node, also, since tmp2 is a memory in the stack memory
// and not a pointer, we do not use the arrows '->' but a '.' to make the link. 

int	main(void)
{
	char	*ctt;
	t_list	*stack;
	t_list	tmp2;

	ctt = "synonym";
	tmp2.content = ctt;
	stack = ft_lstnew(ctt);
	printf("%s\n", stack -> content);
	printf("%s\n", tmp2.content);
	free (stack);
}
 */
// #include <stdio.h>

// int main() 
// {
//     // Testing the ft_lstnew function
//     int data = 42;
//     t_list *node = ft_lstnew(&data);

//     if (node != NULL) {
//         printf("New node created successfully.\n");
//         printf("Content of the node: %d\n", *((int *)node->content));
//     } else {
//         printf("Failed to create a new node.\n");
//     }

//     // Freeing allocated memory
//     free(node);
//     return 0;
// }