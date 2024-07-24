/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:49:05 by root              #+#    #+#             */
/*   Updated: 2024/07/24 17:12:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

	i = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	while (nb != 0)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	str[i] = '\0';
	while (i != 0)
		ft_putchar(str[--i]);
}
/*
int	main(void)
{
	int	nb;

	nb = -150;
	ft_putnbr(nb);
	write(1, "\n", 1);
}
*/
