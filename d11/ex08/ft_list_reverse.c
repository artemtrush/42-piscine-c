/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 19:03:49 by atrush            #+#    #+#             */
/*   Updated: 2016/10/12 20:33:21 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list);
{
	int i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

void	ft_recurse(t_list **begin_list, t_list **last)
{
	t_list *list;

	list = *begin_list;
	if ((list->next)->next)
	{
		ft_recurse(&(list->next), last);
	}
	else
		*last = list->next;
	(list->next)->next = list;
}

void	ft_first_crutch(t_list **begin_list)
{
	t_list *one;
	t_list *two;

	one = *begin_list;
	two = one->next;
	one->next = 0;
	two->next = one;
	*begin_list = two;
}

void	ft_second_crutch(t_list **begin_list)
{
	t_list *one;
	t_list *two;
	t_list *three;

	one = *begin_list;
	two = one->next;
	three = two->next;
	one->next = 0;
	two->next = one;
	three->next = two;
	*begin_list = three;
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*last;
	int 	k;

	if (*begin_list == 0)
		return ;
	k = ft_list_size(*begin_list);
	if (k == 1)
		return ;
	else if (k == 2)
		ft_first_crutch(begin_list);
	else if (k == 3)
		ft_second_crutch(begin_list);
	else
	{
		ft_recurse(begin_list, &last);
		(*begin_list)->next = 0;
		*begin_list = last;
	}
}
