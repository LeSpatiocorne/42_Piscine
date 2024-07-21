/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:34:25 by root              #+#    #+#             */
/*   Updated: 2024/07/20 18:14:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	str[] = "testes";
	if (ft_strlen(str) == 6)
		write(1, "PASS", 4);
	else
		write(1, "NOPE", 4);
	write(1, "\n", 1);
	return 0;
}
*/
