/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharriss <tharriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:32:35 by tcherrab          #+#    #+#             */
/*   Updated: 2024/09/08 16:24:56 by tharriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_print(int x, int y, int h, int l)
{
	if (h == 0)
	{
		if (l == 0)
			ft_putchar("o");
		else if (l == x - 1)
			ft_putchar("o");
		else
			ft_putchar("-");
	}
	else if (h == y - 1)
	{
		if (l == 0)
			ft_putchar("o");
		else if (l == x - 1)
			ft_putchar("o");
		else
			ft_putchar("-");
	}
	else if (l == 0 || l == x - 1)
		ft_putchar("|");
	else
		ft_putchar(" ");
}

void	rush(int x, int y)
{
	int	l;
	int	h;

	h = 0;
	while (h < y)
	{
		l = 0;
		while (l < x)
		{
			ft_print(x, y, h, l);
			l++;
		}
		h++;
		ft_putchar("\n");
	}
}
