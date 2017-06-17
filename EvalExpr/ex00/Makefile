# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrush <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/15 13:18:58 by atrush            #+#    #+#              #
#    Updated: 2016/10/16 20:34:07 by atrush           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

OPTIONS = -I. -Wall -Wextra -Werror -o

FILES = ft_putchar.c ft_atoi.c ft_putnbr.c eval_expr.c ft_help.c ft_strlen.c

all:	$(NAME)

$(NAME):
	@gcc $(OPTIONS) $(NAME) $(FILES) main.c

clean: 
	@/bin/rm -f $(NAME)

fclean: clean

re: fclean all
