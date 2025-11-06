/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:07:14 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/20 16:07:18 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main()
{
	char *test1 = "ABC";
	char *test11 = "ABC";
	char *test2 = "ABB";
	char *test3 = "ACC";
	printf("%d", ft_strncmp(test1, test2, 3));
	printf("%d", ft_strncmp(test2, test3, 3));
	printf("%d", ft_strncmp(test3, test1, 3));
	printf("%d", ft_strncmp(test1, test11, 3));
	return 0;
}*/
