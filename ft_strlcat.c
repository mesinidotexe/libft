/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:42:30 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/23 15:42:32 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	while (src[i] != '\0')
		i++;
	if (i + j > size)
		return (i + j);
	i = 0;
	while (src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (j);
}

/* int main(void)
{
	char dest[] = "abc";
	const char source[] = "defgh";
	printf("dest: \"%s\" size is %zu \n", dest, ft_strlcat(dest, source, 10));
	return (0);
} */