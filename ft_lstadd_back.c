/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:55:08 by vmesini-          #+#    #+#             */
/*   Updated: 2025/11/04 20:55:10 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultimo;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		ultimo = *lst;
		while (ultimo->next)
			ultimo = ultimo->next;
		ultimo->next = new;
	}
}
