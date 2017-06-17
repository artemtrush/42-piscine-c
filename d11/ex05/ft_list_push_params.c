/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 18:55:33 by atrush            #+#    #+#             */
/*   Updated: 2016/10/12 18:57:57 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*list;
	int		i;

	i = 1;
	if (ac < 2)
		return (0);
	list = ft_create_elem(av[i++]);
	tmp = list;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = list;
		list = tmp;
		i++;
	}
	return (tmp);
}
