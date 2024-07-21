/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_strupcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                        +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:59 by ndruon              #+#    #+#           */
/*   Updated: 2024/07/20 16:35:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_str_is_strupcase(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if ((str[len] > 96 && str[len] < 123))
			str[len] -= 32;
		len++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "abcdef";
	write(1, ft_str_is_strupcase(str), 6);
	write(1, "\n", 1);
	return 0;
}
*/
