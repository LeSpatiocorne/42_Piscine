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
		ft_putstr("Dict Error\n");
	else if (error_code == 2)
		ft_putstr("Malloc Error\n");
	return (1);
}
