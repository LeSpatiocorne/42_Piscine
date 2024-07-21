/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                        +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:59 by ndruon              #+#    #+#           */
/*   Updated: 2024/07/21 16:07:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (!(str[len] > 47 && str[len] < 58))
			return (0);
		len++;
	}
	return (1);
}
/*
int     main(void)
{
        char str1[] = "123456";
        char str2[] = "1234a56";
        char str3[] = "123 456";

        printf("Test avec \"%s\": %d\n", str1, ft_str_is_numeric(str1));// 1
        printf("Test avec \"%s\": %d\n", str2, ft_str_is_numeric(str2));// 0
        printf("Test avec \"%s\": %d\n", str3, ft_str_is_numeric(str3));// 0

        return 0;
}
*/
