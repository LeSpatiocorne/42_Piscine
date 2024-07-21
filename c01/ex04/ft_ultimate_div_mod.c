/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:18:42 by root              #+#    #+#             */
/*   Updated: 2024/07/21 15:44:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int     main(void)
{
        int x = 10;
        int y = 3;

        printf("Avant l'appel de ft_ultimate_div_mod: x = %d, y = %d\n", x, y);
        ft_ultimate_div_mod(&x, &y);
        printf("Après l'appel de ft_ultimate_div_mod: x = %d (div), y = %d (mod)\n", x, y);
        return (0);
}
*/
