#include "../../includes/ft.h"

void	ft_convert_numeric(char c, t_list *dict)
{
	if (c == '0')
		ft_putstr(dict[0].val);
	else if (c == '1')
		ft_putstr(dict[1].val);
	else if (c == '2')
		ft_putstr(dict[2].val);
	else if (c == '3')
		ft_putstr(dict[3].val);
	else if (c == '4')
		ft_putstr(dict[4].val);
	else if (c == '5')
		ft_putstr(dict[5].val);
	else if (c == '6')
		ft_putstr(dict[6].val);
	else if (c == '7')
		ft_putstr(dict[7].val);
	else if (c == '8')
		ft_putstr(dict[8].val);
	else if (c == '9')
		ft_putstr(dict[9].val);
	ft_putchar(' ');
}

void	ft_str_numbers(char *str)
{
	int	i;
	t_list	*dict;

	i = 0;
	dict = process("numbers.dict");
	while (str[i])
		ft_convert_numeric(str[i++], dict);
}

