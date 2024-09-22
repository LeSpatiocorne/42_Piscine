/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:02:17 by nidruon           #+#    #+#             */
/*   Updated: 2024/09/22 15:49:00 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

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
int		ft_error(int error_code);
void	ft_print(char *str, char *file);
void	ft_print_tens(char *str, t_list *dict, int i);
void	ft_str_numbers(char *str, char *file);
void	ft_convert_numeric(char str, t_list *dict);
void	ft_convert_teens(char *str, t_list *dict);
void	ft_convert_tens(char *str, t_list *dict);
void	ft_convert_hundreds(char *str, t_list *dict);
void	ft_convert_large(char *str, t_list *dict, int size);
void	ft_process_group(char *group, t_list *dict, int group_count);
void	ft_pcs_lgrp(char *group, t_list *dict, int group_count, int *first);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
