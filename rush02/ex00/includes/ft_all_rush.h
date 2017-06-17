/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_rush.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/15 15:21:55 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 14:41:49 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALL_RUSH_H
# define FT_ALL_RUSH_H

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_atoi(char *str);

void	ft_print_str(char beg, char mid, char end, int size_mid);

void	ft_create_list(char **str);

void	ft_print_result(int mas[]);

void	ft_size(char *str);

int		ft_true_false(char *str, int n, char pat[5][10]);

#endif
