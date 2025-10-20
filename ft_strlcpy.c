/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:22:15 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/20 12:22:16 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src[i] == '\0' || size == 0)
		return (0);
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i - 1] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
