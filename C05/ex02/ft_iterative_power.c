/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:05:37 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/30 13:24:41 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n_return;

	i = 0;
	n_return = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		n_return *= nb;
		i++;
	}
	return (n_return);
}
/*
int	main(void)
{
	int nb = 3;
	int power = 3;

	printf("nb = %d\npower = %d\nresult = %d\n",
			nb, power, ft_iterative_power(nb, power));
}
*/
