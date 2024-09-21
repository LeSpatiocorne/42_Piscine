/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:17:07 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/22 00:12:55 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

void	ft_str_numbers(char *str)
{
	t_list	*dict;
	int		size;

	dict = process("numbers.dict");
	size = ft_strlen(str);
	if (size == 1)
		ft_convert_numeric(str[0], dict);
	else if (size == 2)
	{
		if (str[0] == '1')
			ft_convert_teens(str, dict);
		else
			ft_convert_tens(str, dict);
	}
	else if (size == 3)
		ft_convert_hundreds(str, dict);
	else
		ft_convert_large(str, dict, size);
	free(dict);
}
