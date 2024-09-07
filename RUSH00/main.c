void	grid(int size_x, int size_y);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		grid(av[1][0], av[2][0]);
	}
	return (0);
}
