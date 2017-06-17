/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 20:03:17 by atrush            #+#    #+#             */
/*   Updated: 2016/10/14 21:03:11 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *new;

	new = btree_create_node(item);
	if (new)
	{
		if (((*cmpf)((*root)->item, item)) <= 0)
			(*root)->right = new;
		else
			(*root)->left = new;
	}
}
