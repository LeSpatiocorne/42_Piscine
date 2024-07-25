/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:26:20 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/25 13:55:33 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	i2;

	if (ft_strlen(to_find) == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		i2 = 0;
		while (to_find[i2])
		{
			if (str[i + i2] == to_find[i2])
			{
				if (to_find[i2 + 1] == '\0')
					return (&str[i]);
			}
			else
				break ;
			i2++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str1[] = "utopia";
	char str2[] = "op";
	
	printf("input %s wanted occurence %s\n", str1, str2);
	printf("output %s\n", ft_strstr(str1, str2));
}
*/
