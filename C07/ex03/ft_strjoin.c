/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:10:00 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/17 16:11:14 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		str_i;
	int		char_i;
	int		result_index;

	result = malloc(sizeof(strs));
	str_i = 0;
	result_index = 0;
	while (str_i < size)
	{
		char_i = 0;
		while (strs[str_i][char_i] != '\0')
		{
			result[result_index++] = strs[str_i][char_i++];
		}
		char_i = 0;
		while (sep[char_i] != '\0' && str_i != size - 1)
		{
			result[result_index++] = sep[char_i++];
		}
		str_i++;
	}
	result[result_index] = '\0';
	return (result);
}


int	main(int argc, char **argv)
{
	char	*joined_str;
	char	*separator;
	int		size;

	if (argc < 3)
	{
		printf("Usage: %s separator string1 string2 ...\n", argv[0]);
		return (1);
	}
	separator = argv[1];
	size = argc - 2;

	joined_str = ft_strjoin(size, &argv[2], separator);
	if (joined_str == NULL)
	{
		printf("Erreur d'allocation mémoire\n");
		return (1);
	}

	printf("Chaîne concaténée : %s\n", joined_str);
	free(joined_str);
	return (0);
}
