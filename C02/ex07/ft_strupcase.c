/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:26:41 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/23 14:30:48 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if ((str[len] > 96 && str[len] < 123))
			str[len] -= 32;
		len++;
	}
	return (str);
}
/*
int main(void)
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "123abc";
    char str4[] = "TEST";

    printf("Original: %s, Uppercase: %s\n", str1, ft_strupcase(str1));
    printf("Original: %s, Uppercase: %s\n", str2, ft_strupcase(str2));
    printf("Original: %s, Uppercase: %s\n", str3, ft_strupcase(str3));
    printf("Original: %s, Uppercase: %s\n", str4, ft_strupcase(str4));

    return 0;
}
*/
