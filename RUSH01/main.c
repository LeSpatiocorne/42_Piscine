/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:36:41 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/28 12:58:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	main(void)
{
	init_grid();
	move_and_replace(0, 0, 1);
	move_and_replace(0, 1, 2);//2
	move_and_replace(0, 2, 4);
	move_and_replace(0, 3, 3);//4

	move_and_replace(1, 0, 4);
	move_and_replace(1, 1, 3);//6
	move_and_replace(1, 2, 1);
	move_and_replace(1, 3, 2);//8

	move_and_replace(2, 0, 3);
	move_and_replace(2, 1, 4);//10
	move_and_replace(2, 2, 2);
	move_and_replace(2, 3, 1);//12

	move_and_replace(3, 0, 2);
	move_and_replace(3, 1, 1);//14
	move_and_replace(3, 2, 3);
	move_and_replace(3, 3, 4);//16
	print_grid();
	ft_check_sums();
	return (0);
}

