/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 12:46:37 by atrush            #+#    #+#             */
/*   Updated: 2016/10/19 19:42:19 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

t_list	*ft_create_elem(char data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = 0;
	}
	return (tmp);
}

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

void	ft_rewrite(t_list *root, char **str)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = root;
	while (tmp)
	{
		(*str)[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	(*str)[i] = '\0';
}

int		ft_create_list(char **str, int fdir)
{
	int		i;
	char	c;
	t_list	*root;

	i = 0;
	if (read(fdir, &c, 1))
	{
		root = ft_create_elem(c);
		while (read(fdir, &c, 1))
		{
			if (c == '\n')
				break ;
			ft_list_push_back(&root, c);
			i++;
		}
		*str = malloc(sizeof(char) * (i + 1));
		ft_rewrite(root, str);
		ft_list_clear(&root);
	}
	else
		return (1);
	return (0);
}
