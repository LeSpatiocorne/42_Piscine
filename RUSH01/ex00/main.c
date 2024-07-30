#include <unistd.h>
#include <stdio.h>

void	print_grid(void);
void	move_and_replace(int x, int y, int value);
void	init_grid(void);

extern int	g_grid[4][4];
int    verif_args(char *str)
{
    int    i;
    int col_up;
    int col_down;

    i = 0;
    while (i <= 22)
    {
        if (i <= 6 || (i >= 16 && i <= 22))
        {
            col_up = str[i] - 48;
            col_down = str[i+8] - 48;
            if ((col_up + col_down) > 5)
                return (1);
        }
        i += 2;
    }
    return (0);
    
}

void	modif_col_up(char *str)
{
	int    i;
    int    j;
	int counter;

	j = 0;
	counter = 0;
	while (counter <= 6)
	{
		i = 0;
		if (str[counter] == '4')
		{
			while (i < 4)
			{
				move_and_replace(i, j, i + 1);
				i++;
			}
			
		}
		if (str[counter] == '3')
		{
			if (str[counter+8] == '2')
			{
				while (i < 3)
				{
					move_and_replace(i, j, i + 2);
					i++;
				}
				move_and_replace(i, j, 1);
			}
			
		}
		if (str[counter] == '2')
		{
			if (str[counter+8] == '1')
			{
				move_and_replace(i, j, 3);
			}
			
		}
		if (str[counter] == '1')
		{
			move_and_replace(i, j, 4);
		}
		counter += 2;
		j++;
	}
}

void	modif_col_down(char *str)
{
	int    i;
    int    j;
	int counter;

	j = 0;
	counter = 8;
	while (counter >= 8 && counter <= 14)
	{
		i = 3;
		if (str[counter] == '4')
		{
			while (i >= 0)
			{
				move_and_replace(i, j, i + 1);
				i--;
			}
			
		}
		if (str[counter] == '3')
		{
			if (str[counter-8] == '2')
			{
				while (i < 3)
				{
					move_and_replace(i, j, i + 2);
					i--;
				}
				move_and_replace(i, j, 1);
			}
			
		}
		if (str[counter] == '2')
		{
			if (g_grid[i-3][j] == 4)
			{
				move_and_replace(i, j, 3);
			}
			
		}
		if (str[counter] == '1')
		{
			move_and_replace(i, j, 4);
		}
		counter += 2;
		j++;
	}
}

void	modif_col_left(char *str)
{
	int    i;
    int    j;
	int counter;

	i = 0;
	counter = 16;
	while (counter >= 16 && counter <= 22)
	{
		j = 0;
		if (str[counter] == '4')
		{
			while (j < 4)
			{
				move_and_replace(i, j, j + 1);
				j++;
			}
			
		}
		if (str[counter] == '3')
		{
			if (str[counter+8] == '2')
			{
				while (j < 3)
				{
					move_and_replace(i, j, j + 2);
					j++;
				}
				move_and_replace(i, j, 1);
			}
			
		}
		if (str[counter] == '2')
		{
			if (str[counter+8] == '1')
			{
				move_and_replace(i, j, 3);
			}
			
		}
		if (str[counter] == '1')
		{
			move_and_replace(i, j, 4);
		}
		counter += 2;
		i++;
	}
}

void	modif_col_right(char *str)
{
	int    i;
    int    j;
	int counter;

	i = 0;
	counter = 24;
	while (counter >= 24 && counter <= 30)
	{
		j = 3;
		if (str[counter] == '4')
		{
			while (j >= 0)
			{
				move_and_replace(i, j, j + 1);
				j--;
			}
			
		}
		if (str[counter] == '3')
		{
			if (str[counter-8] == '2')
			{
				while (j < 3)
				{
					move_and_replace(i, j, j + 2);
					j--;
				}
				move_and_replace(i, j, 1);
			}
			
		}
		if (str[counter] == '2')
		{
			if (g_grid[i-3][j] == 4)
			{
				move_and_replace(i, j, 3);
			}
			
		}
		if (str[counter] == '1')
		{
			move_and_replace(i, j, 4);
		}
		counter += 2;
		i++;
	}
}

void	modify_alone_zeros()
{
	int	i;
	int	j;
	int count;
	int	nb_zero;
	int	j_current;

	i = 0;
	
	while (i < 4)
	{
		count = 0;
		j_current = 0;
		nb_zero = 0;
		j = 0;
		while (j < 4)
		{
			if (g_grid[i][j] == 0)
			{
				nb_zero++;
				j_current = j;
			}
			else
			{
				count += g_grid[i][j];
			}
			j++;
		}
		if (nb_zero == 1)
		{
			move_and_replace(i, j_current, 10 - count);
		}
		i++;
	}
}

int	get_occurences_digit(int a)
{
	int	i;
	int	j;
	int one;
	int	two;
	int	three;
	int	four;

	i = 0;
	one = 0;
	two = 0;
	three = 0;
	four = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (g_grid[i][j] == 1)
				one++;
			if (g_grid[i][j] == 2)
				two++;
			if (g_grid[i][j] == 3)
				three++;
			if (g_grid[i][j] == 4)
				four++;
			j++;
		}
		i++;
	}
	if (a == 1)
		return (one);
	else if (a == 2)
		return (two);
	else if (a == 3)
		return (three);
	else
		return (four);
}

int	run_through_line(int value)
{
	int	i;
	int	j;
	int counter;

	i = 0;
	while (i < 4)
	{
		j = 0;
		counter = 0;
		while (j < 4)
		{
			if (g_grid[i][j] != value)
				counter++;
			j++;
		}
		if (counter == 4)
			return (i);
		i++;
	}
	return (0);
}

int	run_through_col(int value)
{
	int	i;
	int	j;
	int counter;

	j = 0;
	while (j < 4)
	{
		i = 0;
		counter = 0;
		while (i < 4)
		{
			if (g_grid[i][j] != value)
				counter++;
			i++;
		}
		if (counter == 4)
			return (j);
		j++;
	}
	return (0);
}

void	final_fill()
{
	int	i;
	int	j;
	int one;
	int	two;
	int	three;
	int	four;

	i = 0;
	j = 0;
	one = get_occurences_digit(1);
	two = get_occurences_digit(2);
	three = get_occurences_digit(3);
	four = get_occurences_digit(4);

	if (one == 3)
	{
		move_and_replace(run_through_line(1), run_through_col(1), 1);
	}
	if (two == 3)
	{
		move_and_replace(run_through_line(2), run_through_col(2), 2);
	}
	if (three == 3)
	{
		move_and_replace(run_through_line(3), run_through_col(3), 3);
	}
	if (four == 3)
	{
		move_and_replace(run_through_line(4), run_through_col(4), 4);
	}

}

int main(int argc, char **argv) 
{
	if (argc < 1)
	{
		return (0);
	}
	init_grid();
	if (verif_args(argv[1]) == 1)
	{
		write(1, "ERROR", 5);
		return (1);
	}
	else
	{
		modif_col_up(argv[1]);
		modif_col_down(argv[1]);
		modif_col_left(argv[1]);
		modif_col_right(argv[1]);
		modify_alone_zeros();
		final_fill();
		modify_alone_zeros();
		print_grid();
	}

    return 0;
}