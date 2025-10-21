/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:11:24 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/21 18:11:28 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	neg;

	nbr = 0;
	neg = 0;
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	if (neg % 2 != 0)
		nbr = -nbr;
	return (nbr);
}
