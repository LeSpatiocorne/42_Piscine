#include "../includes/ft.h"

int main(int ac, char **av)
{
	if (ac == 2)
		ft_print(av[1]);
	else
		ft_error(418);
	ft_putchar('\n');
	return (0);
}
