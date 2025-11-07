/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:11:40 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/23 19:11:41 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while ((str[i] != c) && (i < n))
	{
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}

/* int	main(void)
{
	char data[] = "abcdef";
	char *result;

	result = ft_memchr(data, 'd', 6);
	if (result)
		printf("Encontrado: '%c' na posição %ld\n", *result, result - data);
	else
		printf("Caractere não encontrado!\n");

	return (0);
} */