/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sudoku_is_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofiess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 09:07:33 by thofiess          #+#    #+#             */
/*   Updated: 2018/08/19 15:01:18 by hde-cock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "proto.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		parse_sudoku(int pos[9][9], char **argv)
{
	int ix;
	int iy;

	iy = 0;
	while (iy < 9)
	{
		ix = 0;
		while (ix < 9)
		{
			if (argv[iy][ix] >= '0' && argv[iy][ix] <= '9')
				pos[iy][ix] = argv[iy][ix] - '0';
			else if (argv[iy][ix] == '.')
				pos[iy][ix] = 0;
			else
				return (0);
			ix++;
		}
		if (argv[iy][ix])
			return (0);
		iy++;
	}
	return (1);
}

void	print_sudoku(int pos[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(pos[i][j] + 48);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	set_pos(int *pos, int *origin, int i, int check)
{
	*pos = i;
	if (check == 0)
		*origin = i;
}
