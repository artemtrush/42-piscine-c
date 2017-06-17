/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 15:50:37 by atrush            #+#    #+#             */
/*   Updated: 2016/10/19 19:43:09 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef	struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

int					ft_create_list(char **str, int fdir);

int					ft_atoi_and_sym(char *str, char sym[3]);

void				ft_print_result(char **mas, int n, int m);

int					ft_strlen(char *str);

int					ft_check(char ***mas, int n, int m, char sym[3]);

int					ft_open(char sym[3], int *n, int argc, char *str);

#endif
