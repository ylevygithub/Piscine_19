/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:43:40 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 23:44:31 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
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
