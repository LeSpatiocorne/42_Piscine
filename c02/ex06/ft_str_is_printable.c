/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:26:17 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/23 12:26:20 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (!(str[len] > 31 && str[len] < 127))
			return (0);
		len++;
	}
	return (1);
}
/*
int     main(void)
{
        char str1[] = "Hello, world!";
        char str2[] = "Hello\x7Fworld!"; 
	// \x7F est "DEL", il n'est pas printable

        printf("Test %s: %d\n", str1, ft_str_is_printable(str1)); // 1
        printf("Test %s: %d\n", str2, ft_str_is_printable(str2)); // 0

        return 0;
}
*/
