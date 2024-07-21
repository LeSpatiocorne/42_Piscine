/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:48:01 by root              #+#    #+#             */
/*   Updated: 2024/07/21 18:59:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		diff = diff + (s1[i] - s2[i]);
		i++;
	}
	return (diff);
}
/*
int	main()
{
	char	str1[] = "teste";
	char	str2[] = "test";
	unsigned int number = 5;
	printf("Comparaison entre %s et %s : %d\n", str1, str2, ft_strncmp(str1, str2, number));
	return (0);
}
*/
