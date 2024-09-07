#include <unistd.h>

void	grid(int size_x, int size_y)
{
	int	grid[size_x][size_y];
	int	x;
	int	y;
	char	c;

	x = 0;
	while (x < 5)
	{
		y = 0;
		while (y < 5)
		{
			c = grid[x][y] + '0';
			write(1, &c, 1);
			if (y < 3)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
