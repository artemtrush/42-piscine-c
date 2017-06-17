/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 13:17:28 by atrush            #+#    #+#             */
/*   Updated: 2016/10/11 18:29:29 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *mas;

	mas = malloc(sizeof(int) * length);
	if (mas == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		mas[i] = f(tab[i]);
		i++;
	}
	return (mas);
}
