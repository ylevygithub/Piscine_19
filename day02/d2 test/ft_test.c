/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:21:18 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/14 16:56:56 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{   
	write (1, &c, 1);
	return(0);
}

void ft_print_final(char a, char b, char c)
{
	if (a != '7')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}   
	else 
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}   
}

void    ft_print_comb(void)
{   
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{   
		while (b <= '8')
		{   
			while (c <= '9')
			{   
				if (a < b && b < c)
				{   
					ft_print_final(a, b, c);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int main()
{
	ft_print_comb();
	return(0);
}
