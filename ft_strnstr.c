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
		return (&big[i]);
	while ((big[i]) && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && (j + i < len))
			j++;
		if (little[j] == '\0')
			return (&big[i]);
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
		printf("Encontrado: %s\n", result);
	else
		printf("nao ta aqui\n");
	return (0);
}
