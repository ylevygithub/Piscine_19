/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 00:23:34 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/24 00:57:37 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	
	i = nb;
	if (power < 0)
		return(0);
	if (power == 0)
		return(1);
	if (power == 1)
		return(nb);

	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return(nb);
}

