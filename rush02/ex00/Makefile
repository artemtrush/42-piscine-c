# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrush <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/15 13:18:58 by atrush            #+#    #+#              #
#    Updated: 2016/10/16 14:44:08 by atrush           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

OPTIONS = -I ./includes/ -Wall -Wextra -Werror -o

BASE = ./srcs/ft_putchar.c ./srcs/ft_atoi.c ./srcs/ft_putnbr.c ./srcs/

FILES = ./srcs/ft_create_elem.c ./srcs/ft_list.c ./srcs/ft_help.c

all:	$(NAME)

$(NAME):
	@gcc $(OPTIONS) rush-00 $(BASE)rush00.c
	@gcc $(OPTIONS) rush-01 $(BASE)rush01.c
	@gcc $(OPTIONS) rush-02 $(BASE)rush02.c
	@gcc $(OPTIONS) rush-03 $(BASE)rush03.c
	@gcc $(OPTIONS) rush-04 $(BASE)rush04.c
	@gcc $(OPTIONS) $(NAME) $(BASE)main_rush.c $(FILES)

clean: 
	@/bin/rm -f $(NAME) rush-00 rush-01 rush-02 rush-03 rush-04

fclean: clean

re: fclean all
