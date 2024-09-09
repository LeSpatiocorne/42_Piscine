/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:09:53 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/09 09:54:46 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    long    nb;

    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
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
