/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:20:49 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/23 12:20:55 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
/*
int     main(void)
{
        char src[] = "Hello, world!";
        char dest[20];

        unsigned int n = 5;
        ft_strncpy(dest, src, n);

        printf("Source: %s\n", src);
        printf("Destination: %s\n", dest);

        return 0;
}
*/
