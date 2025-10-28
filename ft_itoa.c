/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:33:06 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/28 00:33:08 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrev(char *str)
{
	int m;
	int w;
	int d;
	int p;
	char *rev;

	d = 0;
	m = 0;
	w = ft_strlen(str);
	p = w;
	rev = malloc(sizeof(char) * (w + 1));
	while (d < p)
	{
		rev[m] = str[w];
		m++;
		d++;
		w--;
	}
	rev[m] = '\0';
	return (rev);
}

char *ft_itoa(int n)
{
	char *str;
	int decimal;
	int temp;
	int i;

	i = 0;
	temp = n;
	decimal = 1;
	while (n >= 10)
	{
		n = n / 10;
		decimal++;
	}
	str = malloc(sizeof(char) * decimal);
	if (!str)
		return (NULL);
	while (temp >= n)
	{
		str[i] = temp % 10 + '0';
		temp = temp / 10;
		i++;
	}
	ft_strrev(str);
	return (str);
}

int main()
{
	char *str = ft_itoa(420);
	printf("%s", str);
	return 0;
}
