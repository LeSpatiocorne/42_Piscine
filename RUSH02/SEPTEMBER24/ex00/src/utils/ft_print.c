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

void	ft_extract_numbers(char *str, char **dest)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
		i++;
	j = i - 1;
	size = 0;
	while (j++, str[j] >= '0' && str[j] <= '9')
		size++;
	if (size > 0 && size <= 39)
	{
		*dest = malloc((size + 1) * sizeof(char));
		j = 0;
		while (str[i] >= '0' && str[i] <= '9')
			(*dest)[j++] = str[i++];
		(*dest)[j] = '\0';
	}
	else
	{
		*dest = NULL;
		ft_error(3);
	}
}

void	ft_print(char *str, char *file)
{
	char	*dest;

	while (*str && (*str < '0' || *str > '9'))
	{
		if (*str == '-' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
			ft_error(3);
		ft_putchar(*str++);
	}
	ft_extract_numbers(str, &dest);
	if (dest)
	{
		ft_str_numbers(dest, file);
		free(dest);
		while (*str >= '0' && *str <= '9')
			str++;
	}
	if (*str)
		ft_print(str, file);
}
