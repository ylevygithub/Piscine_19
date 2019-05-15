/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 00:08:09 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/20 15:15:56 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void	ft_print_comb2(void)
{
	int ndg;
	int ndd;

	ndg = 0;
	ndd = 1;
	while (ndg <= 98)
	{
		while (ndd <= 99)
		{
			ft_putchar(ndg / 10 + '0');
			ft_putchar(ndg % 10 + '0');
			ft_putchar(' ');
			ft_putchar(ndd / 10 + '0');
			ft_putchar(ndd % 10 + '0');
			if(ndg == 98)
			{
				ft_putchar('\n');
				return;
			}
			ndd++;
			ft_putchar(',');
			ft_putchar(' ');
		}
		ndg++;
		ndd = ndg + 1;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}