/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:37:29 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 23:41:51 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == '\0' && s1[i] != s2[i + 1])
			return (s1[i] - s2[i + 1]);
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] == s2[i])
			i++;
	}
	return (0);
}
