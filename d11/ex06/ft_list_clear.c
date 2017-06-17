/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 18:58:32 by atrush            #+#    #+#             */
/*   Updated: 2016/10/12 19:21:53 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *tmp;

	tmp = *begin_list;
	while (tmp)
	{
		if (tmp->next)
		{
			list = tmp->next;
		}
		else
		{
			list = NULL;
		}
		free(tmp);
		tmp = list;
	}
	*begin_list = 0;
}
