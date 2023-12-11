/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:18:18 by oadewumi          #+#    #+#             */
/*   Updated: 2023/12/11 14:57:44 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*extra;

	extra = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new)
	{
		while (extra -> next != NULL)
		{
			extra = extra -> next;
		}
		extra -> next = new;
	}
}
