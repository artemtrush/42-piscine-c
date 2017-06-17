/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 21:17:14 by atrush            #+#    #+#             */
/*   Updated: 2016/10/14 21:30:08 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (root->left != 0)
		btree_apply_infix(root->left, cmpf);
	if (((*cmpf)(data_ref, root->item)) == 0)
		return (root);
	if (root->right != 0)
		btree_apply_infix(root->right, cmpf);
	return (0);
}
