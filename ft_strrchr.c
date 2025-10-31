/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:38:30 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/23 17:38:33 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	if (c == '\0')
		return (&s[ft_strlen(s)]);
	i = ft_strlen(str);
	while ((str[i] != c) && (i != 0))
		i--;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}

/* int	main(void)
{
	const char *str1 = "abcdeflghijklmnopqrstuvwxy";
	char *str2;
	printf("%s \n", ft_strrchr(str1, 'l'));
	return (0);
} */