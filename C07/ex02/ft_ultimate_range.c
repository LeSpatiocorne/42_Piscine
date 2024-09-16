/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:36:03 by ndruon            #+#    #+#             */
/*   Updated: 2024/09/15 14:25:26 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
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
    int min = 0;
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
}*/
