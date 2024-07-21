/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:14:35 by root              #+#    #+#             */
/*   Updated: 2024/07/21 15:43:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int     main(void)
{
        int a = 10;
        int b = 3;
        int div;
        int mod;

        ft_div_mod(a, b, &div, &mod);
        printf("Pour a = %d et b = %d:\n", a, b);
        printf("Division = %d\n", div);
        printf("Modulo = %d\n", mod);
        return (0);
}
*/
