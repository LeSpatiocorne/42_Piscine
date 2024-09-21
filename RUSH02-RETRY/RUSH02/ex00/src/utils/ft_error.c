#include "../../includes/ft.h"

void	ft_error(int error_code)
{
	if (error_code == 418)
		ft_putstr("Oh no something went wrong !\nI'm a teapot now.\n");
	else if (error_code == 42)
		ft_putstr("The value can not be displayed\n");
	else if (error_code == 1)
		ft_putstr("ERROR CODE 1, an error occured while executing the program.\n");
	else if (error_code == 2)
		ft_putstr("ERROR CODE 2, non numeric value found in a numeric only string.\n");
}
