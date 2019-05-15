# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylevy <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 23:49:31 by ylevy             #+#    #+#              #
#    Updated: 2018/08/28 00:52:46 by ylevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
gcc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o
rm *.o
