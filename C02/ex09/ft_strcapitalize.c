/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                       +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:59 by ndruon             #+#    #+#            */
/*   Updated: 2024/07/23 11:42:36 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0)
		       str[i] -= 32;
		else if ((str[i - 1] > 32 && str[i - 1] < 48) ||
				(str[i - 1] > 90 && str[i - 1] < 97) ||
				(str[i - 1] > 122 && str[i - 1] < 127))
		{
			if (!(str[i] > 96 && str[i] < 123))
				str[i] -=32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "sAlUt, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return 0;
}


