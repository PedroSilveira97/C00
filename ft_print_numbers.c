/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 11:07:44 by codespace         #+#    #+#             */
/*   Updated: 2026/04/03 11:13:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    nb;

    nb = '0';
    while (nb <= '9')
    {
        write(1, &nb, 1);
        nb++;
    }
}

int main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
    return (0);
}