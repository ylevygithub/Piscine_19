/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:55:48 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 20:51:31 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
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
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else if ((str[i] >= 0 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) ||
			(str[i] >= 123 && str[i] <= 127))
		{
			return(0);
		}
	}
	return(1);
}

int main(void)
{
	char alpha[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char alpha1[] = "AbnCsvcKKspoew";
	char alpha2[] = "";

	printf("is %s contains only alphabetical characters?\n", alpha);
	if (ft_str_is_alpha(alpha) == 1)
		printf("1\n");
	if (ft_str_is_alpha(alpha) == 0)
		printf("0\n");

	printf("is %s contains only alphabetical characters?\n", alpha1);
	if (ft_str_is_alpha(alpha1) == 1)
		printf("1\n");
	if (ft_str_is_alpha(alpha1) == 0)
		printf("0\n");

	printf("is %s contains only alphabetical characters?\n", alpha2);
	if (ft_str_is_alpha(alpha2) == 1)
		printf("1\n\n");
	if (ft_str_is_alpha(alpha2) == 0)
		printf("0\n\n");
}
