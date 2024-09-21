#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	char	*nb;
	char	*val;
}		t_list;

t_list	*process(char *file);
void	ft_putchar(char c);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_getnb(int fd);
char	*ft_getval(int fd, char *c);
int		ft_strlen(char	*str);
int		ft_strcmp(char *s1, char *s2);
void	ft_error(int error_code);
void	ft_print(char *str);
void	ft_str_numbers(char *str);
void	ft_convert_numeric(char str, t_list *dict);

#endif
