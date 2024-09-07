/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgobert <mgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:19:01 by mgobert           #+#    #+#             */
/*   Updated: 2024/09/07 16:07:24 by mgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

void	rush(int size_x, int size_y)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (x <= size_x)
	{
		if ((x == 1 && y == 1) || (x == size_x && y == 1))
			ft_putchar("A");
		else if ((x == 1 && y == size_y) || (x == size_x && y == size_y))
			ft_putchar("C");
		else if ((x > 1 && x < size_x) && (y > 1 && y < size_y - 1 && x == size_x && y == size_y - 1))
			ft_putchar("B");
		else
			ft_putchar(" ");
		if (y == size_y)
		{
			y = 1;
			x++;
			ft_putchar("\n");
		}
		else
			y++;
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
