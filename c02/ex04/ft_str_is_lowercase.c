/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                        +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:59 by ndruon              #+#    #+#           */
/*   Updated: 2024/07/21 16:09:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (!(str[len] > 96 && str[len] < 123))
			return (0);
		len++;
	}
	return (1);
}
/*
int     main(void)
{
        char str1[] = "hello";
        char str2[] = "Hello";
        char str3[] = "hello123";
        char str4[] = "hello world";

        printf("Test avec \"%s\": %d\n", str1, ft_str_is_lowercase(str1)); // 1
        printf("Test avec \"%s\": %d\n", str2, ft_str_is_lowercase(str2)); // 0
        printf("Test avec \"%s\": %d\n", str3, ft_str_is_lowercase(str3)); // 0
        printf("Test avec \"%s\": %d\n", str4, ft_str_is_lowercase(str4)); // 0

        return 0;
}
*/
