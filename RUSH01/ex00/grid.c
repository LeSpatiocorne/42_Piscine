/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:18:00 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/28 15:16:41 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	g_grid[4][4];

void	print_grid(void)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = g_grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	move_and_replace(int x, int y, int value)
{
	if (x >= 0 && x < 4 && y >= 0 && y < 4)
		g_grid[x][y] = value;
}

void	init_grid(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			g_grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
