/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:23:07 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 20:51:11 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		else if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 91 && str[i] <= 96) ||
				(str[i] >= 123 && str[i] <= 127) || (str[i] >= 58 && str[i] <= 90))
		{
			return (0);
		}
	}
	return (1);
}

int main(void)
{
	char alpha[] = "1+nik";
	char alpha2[] = "";
	char alpha3[] = "123658";

	printf("is %s contains only digits?\n", alpha);
	if (ft_str_is_numeric(alpha) == 1)
			printf("YES\n");
	if (ft_str_is_numeric(alpha) == 0)
			printf("NO\n");

	printf("is %s contains only digits?\n", alpha3);
	if (ft_str_is_numeric(alpha3) == 1)
			printf("YES\n");
	if (ft_str_is_numeric(alpha3) == 0)
			printf("NO\n");

	printf("is %s contains only digits?\n", alpha2);
	if (ft_str_is_numeric(alpha2) == 1)
			printf("YES\n\n");
	if (ft_str_is_numeric(alpha2) == 0)
			printf("NO\n\n");

}
