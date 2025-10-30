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
#include <libbsd.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	if (little[i] == '\0')
		return (&big[i]);
	while (big[i])
	{
		j = 0;
		temp = i;
		while ((little[j] == big[i]) && (j < len))
		{
			i++;
			j++;
		}
		if ((little[j] == big[i]) && (j <= len))
		{
			return (&big[temp]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char big[] = "Eu estou procurando uma palavra!";
	char little[] = "estou blabla";
	char *result;

	result = ft_strnstr(big, little, 6);

	if (result)
	{
		// result[2] = 0;
		printf("Encontrado: %s\n", result);
	}
	else
		printf("Não encontrado!\n");

	return (0);
}
