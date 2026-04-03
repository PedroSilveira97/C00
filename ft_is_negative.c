/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 11:14:07 by codespace         #+#    #+#             */
/*   Updated: 2026/04/03 11:27:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int nb)
{
    if (nb < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

int ft_atoi(char *str)
{
    char    *aux;
    int     value;
    int     sign;
    
    value = 0;
    sign = 1;
    aux = str;
    while (*aux == '\t' || *aux == ' ')
        *aux++;
    if (*aux == '-' || *aux == '+')
    {
        if (*aux == '-')
            sign = sign * -1;
        *aux++;
    }
    while (*aux >= '0' && *aux <= '9')
    {
        value = (value * 10) + (*aux - '0');
        aux++;
    }
    return (value * sign);
}


int main(int ac, char **av)
{
    char    nb;
    
    if (ac == 2)
    {
        nb = ft_atoi(av[1]);
        ft_is_negative(nb);    
    }
    else if (ac == 1)
        write(1, "P", 1);
    write(1, "\n", 1);
}