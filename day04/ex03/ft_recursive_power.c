/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 00:52:56 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/24 00:59:35 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return(0);
	if (power == 0)
		return(1);
	if (power == 1)
		return(nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
