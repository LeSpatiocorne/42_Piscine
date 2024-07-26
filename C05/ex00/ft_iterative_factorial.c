/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:03:21 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/26 20:52:12 by root             ###   ########.fr       */
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
		i *= nb--;
	return (i);
}
/*
int	main(void)
{
	int nb = 5;
	printf("nb = %d\nfactoriel = %d\n", nb, ft_iterative_factorial(nb));
}
*/
