/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:32:21 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/19 12:17:50 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;

	len = ft_strlen(src);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strcpy(ptr, src);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*storred_str;
	int			i;

	storred_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!storred_str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		storred_str[i].str = av[i];
		storred_str[i].copy = ft_strdup(av[i]);
		storred_str[i].size = ft_strlen(av[i]);
		i++;
	}
	storred_str[i].str = 0;
	return (storred_str);
}
/* ---------------------------------------------------------- */
/*                      partie test                           */
/* ---------------------------------------------------------- */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}


void	ft_putnbr(int n)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	if (nb > 10)
	{
		ft_putnbr(nb % 10);
		ft_putnbr(nb / 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;

	}
}
int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return 0;
}
*/
