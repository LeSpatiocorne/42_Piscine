/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_group.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:41:05 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/22 00:43:01 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

void	ft_pcs_lgrp(char *group, t_list *dict, int group_count, int *first)
{
	if (group[0] != '0' || group[1] != '0' || group[2] != '0')
	{
		if (!(*first))
			ft_putchar(' ');
		ft_process_group(group, dict, group_count);
		*first = 0;
	}
}

void	ft_process_group(char *group, t_list *dict, int group_count)
{
	if (group[0] != '0' || group[1] != '0' || group[2] != '0')
	{
		if (ft_strlen(group) == 3)
			ft_convert_hundreds(group, dict);
		else if (ft_strlen(group) == 2)
		{
			if (group[0] == '1')
				ft_convert_teens(group, dict);
			else
				ft_convert_tens(group, dict);
		}
		else
			ft_convert_numeric(group[0], dict);
		if (group_count > 0)
		{
			ft_putchar(' ');
			ft_putstr(dict[28 + group_count].val);
		}
	}
}
