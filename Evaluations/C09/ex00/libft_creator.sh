# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sqian <sqian@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 19:20:46 by mnestere          #+#    #+#              #
#    Updated: 2025/08/19 11:54:42 by sqian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

cc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rcs libft.a *.o
rm *.o

#include <unistd.h>
#include "blabla.h"