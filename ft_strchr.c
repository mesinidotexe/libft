/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:32:55 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/23 16:32:59 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != c && s[i])
		i++;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
	
}

/* int main()
{
	const char *str1 = "abcdefghijklmnopqrstuvwxy";
	char *str2;
	printf ("%s \n", ft_strchr(str1, 102));
	return (0);
} */