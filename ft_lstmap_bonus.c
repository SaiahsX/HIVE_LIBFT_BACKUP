/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:56:49 by oadewumi          #+#    #+#             */
/*   Updated: 2023/12/12 19:24:43 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function applies the function f to each element of the input list lst,
creating a new list with transformed content. If any memory allocation fails 
during the process, it cleans up allocated memory and returns NULL. 
The original list remains unchanged	*/
/*	lst: Pointer to the input list to be mapped.
	f: Function pointer that transforms the content of each node.
	del: Function pointer responsible for deleting or freeing memory.
	new_node: Pointer to a new node created during iteration.
	support_node: Pointer to the resulting new list.
	phony_content: Temporary storage for the transformed content. 
	(especially for the first node)
/*	This function iterates through each node of the input list, applies 
the function f to the content of each node, creates a new node with the 
transformed content, and adds it to the new list. If any memory allocation 
fails during this process, it cleans up memory and returns NULL to indicate 
an error, leaving the original list unchanged.	*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*support_node;
	void	*phony_content;

	support_node = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		phony_content = f(lst->content);
		new_node = ft_lstnew(phony_content);
		if (!new_node)
		{
			(del)(phony_content);
			ft_lstclear(&support_node, del);
			return (0);
		}
		ft_lstadd_back(&support_node, new_node);
		lst = lst->next;
	}
	return (support_node);
}
