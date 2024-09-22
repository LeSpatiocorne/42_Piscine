/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:44:02 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/21 22:44:02 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

int	ft_error(int error_code)
{
	if (error_code == 1)
		ft_putstr("ERROR : Something is wrong with the Dict.");
	else if (error_code == 2)
		ft_putstr("ERROR : Memory allocation don't work as expected.");
	else if (error_code == 3)
		ft_putstr("ERROR : Number is too large or argument not valid.");
	else if (error_code == 4)
		ft_putstr("ERROR : Argument count is not 2.\nUsage : ./rush-02 [number]");
	exit(1);
}
