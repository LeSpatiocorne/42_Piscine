#ifndef FT_H
# define FT_H

typedef struct s_list
{
	int		nb;
	char	*val;
}		t_list;
void	ft_print(int n, t_list *tab, int *first);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_getnb(int fd);
char	*ft_getval(int fd, char *c);
int		ft_atoi(const char *str);
int		getmult(int n);
int		getdec(int n);
t_list	*process(char *file);

#endif
