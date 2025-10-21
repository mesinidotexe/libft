/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:33:51 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/20 20:33:56 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		j = 0;
		while ((little[j] == big[i]) && (little[j + 1] == big[i]) && (j < len))
		{
			j++;
		}
		if (little[j] == big[i])
		{
			return (&little[j]);
		}
		i++;
	}
	return (big);
}
