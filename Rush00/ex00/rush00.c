/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 21:21:42 by tde-brit          #+#    #+#             */
/*   Updated: 2018/08/11 22:17:26 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_affich(int x, int y, int l, int c)
{
	if ((c == 1 || c == x) && (l == 1 || l == y))
	{
		ft_putchar('o');
	}
	else if ((c > 1 && c < x) && (l == 1 || l == y))
	{
		ft_putchar('-');
	}
	else if ((c == 1 || c == x) && (l > 1 && l < y))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int l;
	int c;

	l = 1;
	c = 1;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (l <= y)
	{
		while (c <= x)
		{
			ft_affich(x, y, l, c);
			c++;
		}
		ft_putchar('\n');
		l++;
		c = 1;
	}
}
