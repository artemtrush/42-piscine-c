/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 15:52:06 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 20:40:52 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_H
# define FT_EVAL_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct	c
{
	int		nbr;
	char	znak;
	int		lvl;
}				s_calc;

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_atoi(char *str);

int		eval_expr(char *str);

int		ft_check(char *str, int i);

void	ft_br_lvl(char *str);

int		ft_do_op(char *str, int i);

int		ft_strlen(char *str);

#endif
