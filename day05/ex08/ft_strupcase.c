/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 02:41:14 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/29 16:47:41 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
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
	printf("AFTER %s\n\n",ft_strupcase(upcase));
	printf("BEFORE %s\n", upcase1);
	printf("AFTER %s\n\n",ft_strupcase(upcase1));
	printf("BEFORE %s\n", upcase2);
	printf("AFTER %s\n\n",ft_strupcase(upcase2));
}

