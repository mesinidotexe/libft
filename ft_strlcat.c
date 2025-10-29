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
	size_t	j_start;

	i = 0;
	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	j_start = j;
	while (src[i] != '\0' && j + 1 < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (j_start > size)
		dst[j] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (j_start + i);
}

/* int main(void)
{
	char dest[] = "abc";
	const char source[] = "defgh";
	printf("dest: \"%s\" size is %zu \n", dest, ft_strlcat(dest, source, 10));
	return (0);
} */