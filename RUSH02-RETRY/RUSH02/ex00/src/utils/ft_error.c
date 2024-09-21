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

void	ft_error(int error_code)
{
	if (error_code == 418)
		ft_putstr("Oh no something went wrong !\nI'm a teapot now.\n");
}
