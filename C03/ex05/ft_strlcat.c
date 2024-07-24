/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:08:00 by root              #+#    #+#             */
/*   Updated: 2024/07/24 14:03:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	dist;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	while (i < size && dest[i])
		i++;
	dist = i;
	if (size < dest_len || size == 0)
		return (src_len + size);
	else if (dest_len < size)
	{
		i = 0;
		while ((i < size - dest_len - 1) && src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	if (i > 0)
		dest[dest_len + i] = '\0';
	return (src_len + dist);
}
