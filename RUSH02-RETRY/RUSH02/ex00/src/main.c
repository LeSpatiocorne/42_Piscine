#include "../includes/ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*tab;
	int		*first;
	int		addr_first;

	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0 || is_alpha(av[1]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		tab = process("numbers.dict");
		ft_print(ft_atoi(av[1]), tab, first);
	}
	return (0);
}
