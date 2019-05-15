/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 22:53:49 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 22:54:37 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		if (dest[i + 1] == '\0')
		{
			while (src[j])
			{
				dest[i + 1] = src[j];
				if (src[j + 1] == '\0')
					dest[i + 2] = '\0';
				j++;
				i++;
			}
		}
		i++;
	}
	return (dest);
}
