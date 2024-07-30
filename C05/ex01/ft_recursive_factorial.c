/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:05:00 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/30 13:43:55 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 0)
		return (ft_recursive_factorial(nb - 1) * nb);
	else
		return (1);
}
/*
int	main(void)
{
	int nb = 5;
	printf("nb = %d\nfactoriel = %d\n", nb, ft_recursive_factorial(nb));
}
*/
