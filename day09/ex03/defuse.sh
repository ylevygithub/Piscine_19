# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylevy <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 01:34:37 by ylevy             #+#    #+#              #
#    Updated: 2018/08/17 01:42:47 by ylevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

stat -r bomb.txt | cut -d' ' -f 9 | echo $(cat) -1 | bc
