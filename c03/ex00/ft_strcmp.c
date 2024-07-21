/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:48:01 by root              #+#    #+#             */
/*   Updated: 2024/07/21 14:48:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i2] != '\0')
		i2++;
	if (i == i2)
		return (0);
	else if (i < i2)
		return (-1);
	else
		return (1);
}
/*
int	main(void)
{
	char *test1 = "hello";
	char *test2 = "voidei";

	printf("Test 1: \"%s\" vs \"%s\" => %d\n",
		test1, test2, ft_strcmp(test1, test2));
	return (0);
}
*/
