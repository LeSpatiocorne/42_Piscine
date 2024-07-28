#ifndef HEADER_H
#define HEADER_H

int	ft_strlen(char *str);
void	print_grid(void);
void	move_and_replace(int x, int y, int value);
void	init_grid(void);
int	ft_check_sums_rows(void);
int	ft_check_sums_cols(void);
int	ft_check_sums(void);

#endif
