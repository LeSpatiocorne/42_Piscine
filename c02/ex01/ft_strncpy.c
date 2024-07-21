/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:17:05 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/20 14:17:18 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned	int	n)
{
	unsigned	int	len;

	len = 0;
	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while(len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
