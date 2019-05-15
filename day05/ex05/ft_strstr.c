/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 17:14:08 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/28 17:38:04 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			tab = str + i;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (tab);
				j++;
			}
			tab = 0;
		}
		i++;
	}
	return (0);
}
