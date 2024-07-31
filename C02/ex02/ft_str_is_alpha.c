/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:21:26 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/23 12:21:35 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (!((str[len] > 64 && str[len] < 91)
				|| (str[len] > 96 && str[len] < 123)))
			return (0);
		len++;
	}
	return (1);
}
/*
int     main(void)
{
        char str1[] = "HelloWorld";
        char str2[] = "Hello World!";
        char str3[] = "123Hello";

        printf("Test avec \"%s\": %d\n", str1, ft_str_is_alpha(str1));
        printf("Test avec \"%s\": %d\n", str2, ft_str_is_alpha(str2));
        printf("Test avec \"%s\": %d\n", str3, ft_str_is_alpha(str3));

        return 0;
}
*/
