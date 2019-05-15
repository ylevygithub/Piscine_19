/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 01:49:04 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/17 02:28:41 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdlio.h>

int		ft_antidote(int i, int j, int k)
{
	if ((j < i && i < k) || (k < i && i < j))
		return (i);
	if ((i < j && j < k) || (k < j && j < i))
		return (j);
	if ((j < k && k < i) || (i < k && k < j))
		return (k);
}
