/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 10:40:43 by codespace         #+#    #+#             */
/*   Updated: 2026/04/03 11:02:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    c;
    
    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;   
    }
}

int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    return (0);
}