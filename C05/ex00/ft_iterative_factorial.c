/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:03:21 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/25 13:48:09 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	
	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i *= nb--;
		nb--;
	}
	return (i);
}
/*
int	main(void)
{
	int nb = 4;
	printf("nb = %d\nfactoriel = %d\n", nb, ft_iterative_factorial(nb));
}
*/
