#include <unistd.h>
#include "header.h"

int	ft_check_sums_rows(void)
{
	int	grid[4][4];
	int	i;
	int	j;
	int	sum;
	char	*c;

	c = "ERROR : row value is not 10\n";
	i = 0;
	while (i < 4)
	{
		sum = 0;
		j = 0;
		while (j < 4)
		{
			sum += grid[i][j];
			j++;
		}
		if (sum != 10)
			write(1, c, 28);
		i++;
	}
}

int	ft_check_sums_cols(void)
{
	int	grid[4][4];
	int	i;
	int	j;
	int	sum;
	char	*c;

	c = "ERROR : col value is not 10\n";
	j = 0;
	while (j < 4)
	{
		sum = 0;
		i = 0;
		while (i < 4)
		{
			sum += grid[i][j];
			i++;
		}
		if (sum != 10)
			write(1, c, 28);
		j++;
	}
}

int	ft_check_sums(void)
{
	ft_check_sums_rows();
	ft_check_sums_cols();
	return (0);
}
