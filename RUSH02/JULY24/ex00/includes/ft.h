/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:08:32 by fullgreen         #+#    #+#             */
/*   Updated: 2024/08/04 14:50:35 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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