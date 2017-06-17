# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrush <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/15 13:18:58 by atrush            #+#    #+#              #
#    Updated: 2016/10/19 20:27:10 by atrush           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

C_FILES = main.c ft_func.c ft_list.c
O_FILES = main.o ft_func.o ft_list.o
OPTIONS = -c -I. -Wall -Wextra -Werror -O3

all:	$(NAME)

$(NAME): $(O_FILES)
	@gcc -o $(NAME) $(O_FILES)

%.o: %.c
	@gcc $(OPTIONS) -o $@ $<

clean:
	@/bin/rm -f $(O_FILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
