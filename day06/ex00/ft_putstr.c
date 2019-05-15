/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:35:44 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/28 18:07:08 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int nb;

	nb = 0;
	while (str[nb] != '\0')
	{
		ft_putchar(str[nb]);
		nb = nb + 1;
	}
}
