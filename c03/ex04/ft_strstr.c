/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:26:20 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/23 13:55:28 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	cat[];
	int	i;

	cat = ft_strcat(str, to_find);
	i =  ft_strlen(str);

	while(i != '\0')
	{
		to_find = cat[i];
		i++;
	}
	return to_find
}

int	main(void)
{
	char str1[] = "test";
	char str2[] = "yolo";

