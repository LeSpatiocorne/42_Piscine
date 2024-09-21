/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:44:20 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/21 22:44:20 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

void	ft_print_tens(char *str, t_list *dict, int i)
{
	if (str[1] == '0')
		ft_putstr(dict[20 + i].val);
	else
	{
		ft_putstr(dict[20 + i].val);
		ft_putchar('-');
		ft_convert_numeric(str[1], dict);
	}
}

void	ft_print(char *str)
{
	int		i;
	int		j;
	int		size;
	char	*dest;

	i = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
		ft_putchar(str[i++]);
	j = i - 1;
	size = 0;
	while (j++, str[j] >= '0' && str[j] <= '9')
		size++;
	if (size > 0)
	{
		dest = malloc((size + 1) * sizeof(char));
		j = 0;
		while (str[i] >= '0' && str[i] <= '9')
			dest[j++] = str[i++];
		dest[j] = '\0';
		ft_str_numbers(dest);
		free(dest);
	}
	if (str[i])
		ft_print(str + i);
}
