/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:31:02 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/29 21:31:04 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = (n * -1);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

/* int main()
{
	int test1;
	int test3;
	int test2;

	test1 = 0;
	test2 = 2147483647;
	test3 = -2147483648;
	ft_putnbr_fd(test1, 1);
	ft_putnbr_fd(test2, 1);
	ft_putnbr_fd(test3, 1);
	return (0);
}  */
