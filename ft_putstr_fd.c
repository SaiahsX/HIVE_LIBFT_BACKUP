/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:52:42 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/18 19:30:08 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (*s != '\0')
	{
		write (fd, s, ft_strlen(s));
	}
}
/*
int	main(void)
{
	ft_putstr_fd("www.jw.org", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("==========", 1);
	ft_putstr_fd("\n", 1);
} */