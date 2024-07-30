/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:43:07 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/30 13:43:10 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

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
