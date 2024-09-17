/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:32:28 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/17 11:41:48 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_putnbr(int n)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		write(1, nb + 48, 1);
	}
	if (nb > 10)
	{
		ft_putnbr(nb % 10);
		ft_putnbr(nb / 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{

}
