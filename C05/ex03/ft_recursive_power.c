/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:06:09 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/30 13:39:41 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*
int	main(void)
{
	int nb = 3;
	int power = 3;

	printf("nb = %d\npower = %d\nresult = %d\n",
			nb, power, ft_recursive_power(nb, power));
}
*/
