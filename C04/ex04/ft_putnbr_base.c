
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}
void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
}

int	main(int ac, char **av)
{
	int	nbr = atoi(av[1]);
    char *base = av[2];

	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
}