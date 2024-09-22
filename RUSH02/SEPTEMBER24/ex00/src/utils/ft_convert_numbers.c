/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:43:38 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/22 00:45:41 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

void	ft_convert_numeric(char c, t_list *dict)
{
	if (c == '0')
		ft_putstr(dict[0].val);
	else if (c == '1')
		ft_putstr(dict[1].val);
	else if (c == '2')
		ft_putstr(dict[2].val);
	else if (c == '3')
		ft_putstr(dict[3].val);
	else if (c == '4')
		ft_putstr(dict[4].val);
	else if (c == '5')
		ft_putstr(dict[5].val);
	else if (c == '6')
		ft_putstr(dict[6].val);
	else if (c == '7')
		ft_putstr(dict[7].val);
	else if (c == '8')
		ft_putstr(dict[8].val);
	else if (c == '9')
		ft_putstr(dict[9].val);
}

void	ft_convert_teens(char *str, t_list *dict)
{
	int		i;
	char	*teens[10];

	teens[0] = "10";
	teens[1] = "11";
	teens[2] = "12";
	teens[3] = "13";
	teens[4] = "14";
	teens[5] = "15";
	teens[6] = "16";
	teens[7] = "17";
	teens[8] = "18";
	teens[9] = "19";
	i = 0;
	while (i < 10)
	{
		if (ft_strcmp(str, teens[i]) == 0)
			ft_putstr(dict[10 + i].val);
		i++;
	}
}

void	ft_convert_tens(char *str, t_list *dict)
{
	int		i;
	char	*tens[8];

	tens[0] = "20";
	tens[1] = "30";
	tens[2] = "40";
	tens[3] = "50";
	tens[4] = "60";
	tens[5] = "70";
	tens[6] = "80";
	tens[7] = "90";
	i = -1;
	while (i++, i < 8)
	{
		if (str[0] == tens[i][0])
			ft_print_tens(str, dict, i);
	}
}

void	ft_convert_hundreds(char *str, t_list *dict)
{
	if (str[0] != '0')
	{
		ft_convert_numeric(str[0], dict);
		ft_putchar(' ');
		ft_putstr(dict[28].val);
		if (str[1] != '0' || str[2] != '0')
			ft_putchar(' ');
	}
	if (str[1] != '0' || str[2] != '0')
	{
		if (str[1] == '1')
			ft_convert_teens(str + 1, dict);
		else if (str[1] != '0')
			ft_convert_tens(str + 1, dict);
		else if (str[2] != '0')
			ft_convert_numeric(str[2], dict);
	}
}

void	ft_convert_large(char *str, t_list *dict, int size)
{
	int		i;
	char	group[4];
	int		group_count;
	int		first;

	group_count = (size - 1) / 3;
	i = size % 3;
	if (i == 0)
		i = 3;
	first = 1;
	while (size > 0)
	{
		ft_strncpy(group, str, i);
		group[i] = '\0';
		ft_pcs_lgrp(group, dict, group_count, &first);
		str += i;
		size -= i;
		i = 3;
		group_count--;
	}
}
