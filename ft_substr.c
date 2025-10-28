/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:41:25 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/24 12:41:37 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(char) * len);
	if (!sub)
		return (NULL);
	while (*s != '\0' && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int main(void)
{
	char str[] = "Olá, mundo!";
	char *sub;

	// Exemplo: pegar substring a partir da posição 4, com 5 caracteres
	sub = ft_substr(str, 4, 5);

	if (sub == NULL)
	{
		printf("Erro ao alocar memória.\n");
		return (1);
	}

	printf("Substring: %s\n", sub);

	// Libera a memória alocada pela função
	free(sub);

	return (0);
}*/