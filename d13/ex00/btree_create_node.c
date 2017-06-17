/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 19:08:38 by atrush            #+#    #+#             */
/*   Updated: 2016/10/14 19:12:44 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *new;

	new = malloc(sizeof(t_btree));
	if (new)
	{
		new->item = item;
		new->left = 0;
		new->right = 0;
	}
	return (new);
}
