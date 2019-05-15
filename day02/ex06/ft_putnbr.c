/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 22:52:32 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/20 15:18:49 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    unsigned int i;

    i = 0;
    if (nb < 0)
    {
        ft_putchar('-');
        i = nb * -1;
    }
    i = nb;
    if (i >= 10)
    {
        ft_putnbr(i / 10);
    }
    ft_putchar(i % 10 + '0');
}

int main()
{
    ft_putnbr(2);
    return 0;
}