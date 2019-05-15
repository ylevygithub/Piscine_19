/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 20:01:16 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/28 22:52:27 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_sort_string(char **tab, int size)
{
	int		i;
	char	*temp;

	i = 1;
	while (i + 1 < size)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 1;
		}
		else
			i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	ft_sort_string(argv, argc);
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
	return (0);
}
