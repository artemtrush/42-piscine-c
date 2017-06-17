/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 12:46:37 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 14:53:12 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

void	ft_list_push_back(t_list **begin_list, char data)
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

void	ft_create_list(char **str)
{
	int		i;
	char	c;
	t_list	*root;
	t_list	*tmp;

	i = 0;
	if (read(0, &c, 1))
	{
		root = ft_create_elem(c);
		while (read(0, &c, 1))
		{
			ft_list_push_back(&root, c);
			i++;
		}
		*str = malloc(sizeof(char) * (i + 2));
		i = 0;
		tmp = root;
		while (tmp)
		{
			(*str)[i] = tmp->data;
			tmp = tmp->next;
			i++;
		}
		(*str)[i] = '\0';
		ft_list_clear(&root);
	}
}
