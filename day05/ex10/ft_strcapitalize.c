/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:49:00 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 17:42:25 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) ||
				(str[i] >= 91 && str[i] <= 96) ||
				(str[i] >= 123 && str[i] <= 127))
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
			i++;
	}
	return (str);
}

int main(void)
{
	char upcase3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char upcase4[] = "/AbnCsv cKKspoew";
	char upcase5[] = "zA*bCsvZ 12mvprgmcj";

	printf("BEFORE %s\n", upcase3);
	printf("AFTER %s\n\n",ft_strcapitalize(upcase3));
	printf("BEFORE %s\n", upcase4);
	printf("AFTER %s\n\n",ft_strcapitalize(upcase4));
	printf("BEFORE %s\n", upcase5);
	printf("AFTER %s\n\n",ft_strcapitalize(upcase5));
}
