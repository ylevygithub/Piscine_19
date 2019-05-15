/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 02:58:34 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 16:41:49 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char upcase[] = "A246bCsv";
	char upcase1[] = "/AbnCsv";
	char upcase2[] = "zA*bCsvZ";

	printf("BEFORE %s\n", upcase);
	printf("AFTER %s\n\n",ft_strlowcase(upcase));
	printf("BEFORE %s\n", upcase1);
	printf("AFTER %s\n\n",ft_strlowcase(upcase1));
	printf("BEFORE %s\n", upcase2);
	printf("AFTER %s\n\n",ft_strlowcase(upcase2));
}

