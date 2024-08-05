/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fullgreen <fullgreen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:54:47 by fullgreen         #+#    #+#             */
/*   Updated: 2024/08/03 16:27:01 by fullgreen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;
    if (*str == '-' || *str == '+')
        sign = (*str++ == '-') ? -1 : 1;
    while (*str >= '0' && *str <= '9')
        result = result * 10 + (*str++ - '0');
    return (result * sign);
}
