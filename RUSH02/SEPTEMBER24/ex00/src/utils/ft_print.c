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

char	*ft_atoi(char *str)
{
	int		i;
	int		start;
	char	*result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-' || str[i] == '+')
		ft_error(3);
	start = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == start)
		ft_error(3);
	result = (char *)malloc(sizeof(char) * (i - start + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (i++, str[start + i]
		&& str[start + i] >= '0' && str[start + i] <= '9')
		result[i] = str[start + i];
	result[i] = '\0';
	return (result);
}

void	ft_print(char *str, char *file)
{
	char	*dest;

	dest = ft_atoi(str);
	if (dest)
	{
		if (ft_strlen(dest) > 0 && ft_strlen(dest) <= 39)
		{
			ft_str_numbers(dest, file);
			free(dest);
		}
		else
		{
			free(dest);
			ft_error(3);
		}
	}
	else
		ft_error(3);
}
