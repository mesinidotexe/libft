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

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 2147483647)
	{
		write(1, "2147483647", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (nb * -1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
	}
	ft_putchar((nb % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}

/* int main()
{
	int test;

	test = 0;
	ft_putnbr_fd(test, 1);
	return (0);
} */
