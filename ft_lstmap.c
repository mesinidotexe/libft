/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:09:13 by vmesini-          #+#    #+#             */
/*   Updated: 2025/11/06 15:09:15 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	if (!lst)
		return (NULL);
	newlist = malloc(sizeof(lst));
	if (!newlist)
		return (NULL);
	while (lst)
	{
		newlist = f(lst);
		newlist = newlist->next;
		lst = lst->next;
	}
	return (newlist);
}
