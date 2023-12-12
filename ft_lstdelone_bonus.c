/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:00:45 by oadewumi          #+#    #+#             */
/*   Updated: 2023/12/12 18:05:08 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function takes a parameter as a node and frees the memory of the 
node's content using the function 'del' givern as a parameter also and 
free the node.	*/
/*	Although the memory of the next must not be freed.	*/
/*	First of all we need to check if the function 'del' exists.
If it exists, then we write the function 'del', using parenthesis as (*del),
(this is a way, we use a typecast concept to the void 'del' function)
to delete the content of the node 'lst' like this (*del)(lst->content).	*/
/*	Thus, we free the node 'lst'	*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((*del))
		(*del)(lst->content);
	free(lst);
}

