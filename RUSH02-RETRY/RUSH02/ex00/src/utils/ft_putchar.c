/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:44:34 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/21 22:44:36 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
