/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:07:03 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/31 14:02:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int ft_sqrt_recursive(int nb, int start, int end)
{
	if (start > end)
		return -1; // Square root not found
	int mid = (start + end) / 2;
	int square = mid * mid;
	if (square == nb)
		return mid; // Square root found
	else if (square < nb)
		return ft_sqrt_recursive(nb, mid + 1, end); // Search in the upper half
	else
		return ft_sqrt_recursive(nb, start, mid - 1); // Search in the lower half
}

int ft_sqrt(int nb)
{
	return ft_sqrt_recursive(nb, 0, nb);
}

int main(void)
{
	int number = 8;
	int result = ft_sqrt(number);
	printf("The square root of %d is %d\n", number, result);
	return 0;
}