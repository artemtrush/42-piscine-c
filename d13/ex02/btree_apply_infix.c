/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 19:22:20 by atrush            #+#    #+#             */
/*   Updated: 2016/10/14 21:26:54 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void 	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left != 0)
		btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	if (root->right != 0)
		btree_apply_infix(root->right, applyf);
}
