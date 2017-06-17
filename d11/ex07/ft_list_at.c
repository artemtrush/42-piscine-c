/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 19:00:53 by atrush            #+#    #+#             */
/*   Updated: 2016/10/12 19:02:41 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;
	unsigned int	i;
	
	if ((nbr == 0) || (begin_list == 0))
		return (0);
	i = 1;
	list = begin_list;
	while (i < nbr)
	{
		if (list->next)
		{
			list = list->next;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (list);
}
