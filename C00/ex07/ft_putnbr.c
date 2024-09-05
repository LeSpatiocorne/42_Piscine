/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:09:53 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/05 17:21:50 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;
	long	nbr;
	char	str[12];

	i = 0;
	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr == 0)
		write(1, "0", 1);
	while (nbr != 0)
	{
		str[i++] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	str[i] = '\0';
	while (i != 0)
		ft_putchar(str[--i]);
}
/*
int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	write(1, "\n", 1);
}
*/
