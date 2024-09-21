#include "../../includes/ft.h"

void ft_str_numbers(char *str);

void	ft_print(char *str)
{
	int		i;
	int		j;
	int		size;
	char	*dest;

	i = 0;
	while(str[i] < 48 || str[i] > 57)
		ft_putchar(str[i++]);
	j = -1;
	size = 0;
	while(j++, str[j] >= 48 && str[j] <= 57)
		size++;
	dest = malloc((size + 1) * sizeof(char));
	j = 0;
	while(str[i] >= 48 && str[i] <= 57)
		dest[j++] = str[i++];
	dest[j] = '\0';
	ft_str_numbers(dest);
}
