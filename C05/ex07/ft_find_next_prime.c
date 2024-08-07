/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <ndruon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:52:34 by ndruon            #+#    #+#             */
/*   Updated: 2024/08/07 10:55:48 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}
/*
int main()
{
	printf("%d\n", ft_find_next_prime(97));
	return 0;
}
*/
