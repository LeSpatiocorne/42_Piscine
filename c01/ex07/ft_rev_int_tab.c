/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:16:35 by root              #+#    #+#             */
/*   Updated: 2024/07/21 15:34:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
/*
int     main(void)
{
        int     tab[] = {1, 2, 3, 4, 5};
        int     size = 5;
        int     i;

        printf("Tableau avant renversement: ");
        for (i = 0; i < size; i++)
        {
                printf("%d ", tab[i]);
        }
        printf("\n");
        ft_rev_int_tab(tab, size);
        printf("Tableau après renversement: ");
        for (i = 0; i < size; i++)
        {
                printf("%d ", tab[i]);
        }
        printf("\n");
        return 0;
}
*/
