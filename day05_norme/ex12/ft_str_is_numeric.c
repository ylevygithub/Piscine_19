/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:23:07 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/30 00:06:27 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		i++;
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else if ((str[i] >= 0 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 127))
		{
			return (0);
		}
	}
	return (1);
}
