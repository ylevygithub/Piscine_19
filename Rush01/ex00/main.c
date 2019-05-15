/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thofiess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 09:22:54 by thofiess          #+#    #+#             */
/*   Updated: 2018/08/19 15:02:34 by hde-cock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "proto.h"

int		check_square(int pos[9][9], int x, int y, int nbr)
{
	int xmin;
	int xmax;
	int ymin;
	int ymax;
	int i;

	xmin = (x / 3) * 3;
	xmax = xmin + 3;
	ymin = (y / 3) * 3;
	ymax = ymin + 3;
	while (xmin < xmax)
	{
		i = ymin;
		while (i < ymax)
		{
			if (i != y && xmin != x && pos[i][xmin] == nbr)
				return (0);
			i++;
		}
		xmin++;
	}
	return (1);
}

int		check_pos(int pos[9][9], int x, int y, int nbr)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i != x && pos[y][i] == nbr)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (i != y && pos[i][x] == nbr)
			return (0);
		i++;
	}
	i = check_square(pos, x, y, nbr);
	return (i);
}

void	put_last_nr(int pos[9][9], int nr, int *check)
{
	if (check_pos(pos, 8, 8, nr))
	{
		if (pos[8][8] == 0)
			pos[8][8] = nr;
		*check = *check + 1;
	}
}

void	solve_sudoku(int pos[9][9], int val, int origin[9][9], int *check)
{
	int i;
	int x;
	int y;

	x = val % 9;
	y = val / 9;
	if (pos[y][x] != 0 && (x != 8 || y != 8) && *check < 2)
		solve_sudoku(pos, val + 1, origin, check);
	i = 1;
	while (i < 10 && *check < 2)
	{
		if (x != 8 || y != 8)
		{
			if (check_pos(pos, x, y, i) && pos[y][x] == 0)
			{
				set_pos(&pos[y][x], &origin[y][x], i, *check);
				solve_sudoku(pos, val + 1, origin, check);
				pos[y][x] = 0;
			}
		}
		else
			put_last_nr(origin, i, check);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int pos[9][9];
	int origin[9][9];
	int check;
	int *ptr_check;

	check = 0;
	ptr_check = &check;
	if (argc == 10)
	{
		parse_sudoku(origin, &argv[1]);
		if (parse_sudoku(pos, &argv[1]))
		{
			solve_sudoku(pos, 0, origin, ptr_check);
			if (check == 1)
				print_sudoku(origin);
			else
				write(1, "Error\n", 7);
		}
		else
		{
			write(1, "Error\n", 7);
		}
	}
	return (0);
}
