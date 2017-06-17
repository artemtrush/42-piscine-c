# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrush <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/10 16:38:01 by atrush            #+#    #+#              #
#    Updated: 2016/10/10 20:27:10 by atrush           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S = ./srcs/

OPTIONS = -c -Wall -Wextra -Werror

C_FILES = $(S)ft_putchar.c $(S)ft_putstr.c $(S)ft_strcmp.c $(S)ft_strlen.c $(S)ft_swap.c	
O_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) $(C_FILES) -I ./includes/
	ar rc $(NAME) $(O_FILES) 

clean: 
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
