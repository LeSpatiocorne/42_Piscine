/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <ndruon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:36:03 by ndruon            #+#    #+#             */
/*   Updated: 2024/08/05 14:36:05 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int     i;

    i = 0;
    min++;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    *range = malloc(sizeof(int) * (max - min));
    while (min < max)
        (*range)[i++] = min++;
    return (i);
}
/*
int main(void)
{
    int min = 5;
    int max = 12;
    int *result;
    int size = ft_ultimate_range(&result, min, max);
    
    printf("min: %d\nmax: %d\nresult: ", min, max);
    if (result)
    {
        for (int i = 0; i < size; i++)
            printf("%d ", result[i]);
        free(result);
    }
    else
        printf("Memory allocation failed");
    return 0;
}
*/