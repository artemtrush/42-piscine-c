/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 15:56:46 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 20:26:58 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

void	ft_create_struct(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i = ft_check(str, i);	
		i++;
	}
}

int 	eval_expr(char *str)
{
	ft_create_struct(str);
	ft_br_lvl(str);
	return (ft_do_op(str, 0));
}
