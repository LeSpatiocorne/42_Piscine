/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:07:03 by ndruon            #+#    #+#             */
/*   Updated: 2024/08/05 14:34:36 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	int number = 4120900;
	int result = ft_sqrt(number);
	printf("The square root of %d is %d\n", number, result);
	return 0;
}
*/
