/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-cock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 15:04:20 by hde-cock          #+#    #+#             */
/*   Updated: 2018/08/19 15:04:24 by hde-cock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

int		parse_sudoku(int pos[9][9], char **argv);

void	print_sudoku(int pos[9][9]);

void	set_pos(int *pos, int *origin, int i, int check);

#endif
