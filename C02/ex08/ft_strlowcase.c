/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:27:08 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/23 14:37:32 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] > 64 && str[len] < 91)
			str[len] += 32;
		len++;
	}
	return (str);
}
/*
int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "WORLD";
    char str3[] = "123ABC";
    char str4[] = "test";

    printf("Original: %s, Lowercase: %s\n", str1, ft_strlowcase(str1));
    printf("Original: %s, Lowercase: %s\n", str2, ft_strlowcase(str2));
    printf("Original: %s, Lowercase: %s\n", str3, ft_strlowcase(str3));
    printf("Original: %s, Lowercase: %s\n", str4, ft_strlowcase(str4));

    return 0;
}
*/
