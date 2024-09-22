/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:45:15 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/22 16:07:51 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_print(av[1], "numbers.dict");
	else if (ac == 3)
		ft_print(av[2], av[1]);
	else
		ft_error(4);
	ft_putchar('\n');
	return (0);
}
