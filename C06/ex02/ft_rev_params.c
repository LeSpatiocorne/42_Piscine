/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:15:55 by root              #+#    #+#             */
/*   Updated: 2024/07/31 14:47:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[i])
			i++;
		while (i > 1)
		{
			write(1, argv[i - 1], ft_strlen(argv[i - 1]));
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
