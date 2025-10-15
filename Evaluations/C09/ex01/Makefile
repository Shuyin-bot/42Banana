# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sqian <sqian@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 16:00:08 by mnestere          #+#    #+#              #
#    Updated: 2025/08/19 11:58:26 by sqian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC_DIR = srcs 
INCLUDES = -Iincludes
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = $(CFILES:.c=.o)

.PHONY: all fclean clean re 

all:$(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o:%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OFILES)
	
fclean: clean
	rm -f $(NAME)

re: fclean all