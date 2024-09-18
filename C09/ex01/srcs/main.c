#include "../includes/ft.h"

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	int len;
	int a = 42;
	int b = 24;

	// Test ft_strcmp
	int cmp = ft_strcmp(str1, str2);
	if (cmp < 0)
		ft_putstr("str1 is less than str2\n");
	else if (cmp > 0)
		ft_putstr("str1 is greater than str2\n");
	else
		ft_putstr("str1 is equal to str2\n");

	// Test ft_strlen
	len = ft_strlen(str1);
	ft_putstr("Length of str1: ");
	ft_putchar(len + '0');
	ft_putchar('\n');

	// Test ft_swap
	ft_putstr("Before swap: a = ");
	ft_putchar(a + '0');
	ft_putstr(", b = ");
	ft_putchar(b + '0');
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putstr("After swap: a = ");
	ft_putchar(a + '0');
	ft_putstr(", b = ");
	ft_putchar(b + '0');
	ft_putchar('\n');

	// Test ft_putchar
	ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	ft_putchar('\n');

	// Test ft_putstr
	ft_putstr("Hello, World!\n");

	return (0);
}
