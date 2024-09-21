/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:43:38 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/21 22:47:50 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

int	ft_strcmp(char *s1, char *s2);

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
	ft_putchar(' ');
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
		{
			ft_putstr(dict[10 + i].val);
			break ;
		}
		i++;
	}
	ft_putchar(' ');
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
		if (ft_strcmp(str, tens[i]) == 0
			|| (str[0] == tens[i][0] && str[1] != '0'))
			ft_putstr(dict[20 + i].val);
	}
	if (str[1] != '0')
	{
		ft_putchar('-');
		ft_convert_numeric(str[1], dict);
	}
	ft_putchar(' ');
}

void	ft_str_numbers(char *str)
{
	int		i;
	t_list	*dict;

	i = 0;
	dict = process("numbers.dict");
	while (str[i])
	{
		if (str[i] == '1' && str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			ft_convert_teens(&str[i], dict);
			i += 2;
		}
		else if (str[i] >= '2' && str[i] <= '9'
			&& str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			ft_convert_tens(&str[i], dict);
			i += 2;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			ft_convert_numeric(str[i], dict);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
