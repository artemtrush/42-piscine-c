/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 11:12:18 by atrush            #+#    #+#             */
/*   Updated: 2016/10/12 18:44:47 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *list;
	
	new = ft_create_elem(data);
	if (new)
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		list->next = new;
	}
}
