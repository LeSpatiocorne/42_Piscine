/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                        +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:59 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/22 12:03:07 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (!(str[len] > 64 && str[len] < 91))
			return (0);
		len++;
	}
	return (1);
}
/*
int     main(void)
{
        char str1[] = "HELLO";
        char str2[] = "Hello";
        char str3[] = "HELLO123";
        char str4[] = "HELLO WORLD";

        printf("Test avec \"%s\": %d\n", str1, ft_str_is_uppercase(str1)); // 1
        printf("Test avec \"%s\": %d\n", str2, ft_str_is_uppercase(str2)); // 0
        printf("Test avec \"%s\": %d\n", str3, ft_str_is_uppercase(str3)); // 0
        printf("Test avec \"%s\": %d\n", str4, ft_str_is_uppercase(str4)); // 0

        return 0;
}
*/
