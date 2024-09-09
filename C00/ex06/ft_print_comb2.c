/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <ndruon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:20:27 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/09 12:20:12 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aff_comb(int a, int b, bool t)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (t == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	t;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (!(a == 98 && b == 99))
				t = 0;
			else
				t = 1;
			ft_aff_comb(a, b, t);
			b++;
		}
		a++;
	}
}

/*
int main(void)
{
	ft_print_comb2();
	return (0);
}
*/
