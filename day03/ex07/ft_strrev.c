/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 22:36:41 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/22 22:48:20 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char tmp;
	char str[i];
	char str[j];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		i--;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
	}
	return (str);
}
