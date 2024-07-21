/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:12:02 by root              #+#    #+#             */
/*   Updated: 2024/07/21 15:40:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int     main(void)
{
        int x = 5;
        int y = 10;

        printf("Avant l'appel de ft_swap: x = %d, y = %d\n", x, y);
        ft_swap(&x, &y);
        printf("Après l'appel de ft_swap: x = %d, y = %d\n", x, y);

        return 0;
}
*/
