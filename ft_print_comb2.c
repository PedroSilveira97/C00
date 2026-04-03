/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:09:35 by codespace         #+#    #+#             */
/*   Updated: 2026/04/03 21:47:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;

    a = '0';
    b = '0';
    c = '0';
    d = '0';

    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            c = '0';
            while (c <= '9')
            {
                d = '0';
                while (d <= '9')
                {
                    if (a < c || b < d)
                    {
                        write(1, &a, 1);
                        write(1, &b, 1);
                        write(1, " ", 1);
                        write(1, &c, 1);
                        write(1, &d, 1);
                        write(1, ", ", 2);
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    write(1, "\n", 1);
    return (0);
}