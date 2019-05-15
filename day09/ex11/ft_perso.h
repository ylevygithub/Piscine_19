/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:31:44 by ylevy             #+#    #+#             */
/*   Updated: 2018/08/17 12:55:14 by ylevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include <stdlib.h>
#include <stdlio.h>

int		main(int argc, char **argv)
{
	printf("t_perso         jack");
	printf("\n\n");
	printf("jack.name = strdup(%c)\n", "jack");
	printf("jack.life = %f\n", 100.0);
	printf("jack.age = %d\n", 42);
	printf("jack.profession = SAVE_THE_WORLD\n");
	return (0);
}
			
