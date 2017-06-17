/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 19:07:11 by atrush            #+#    #+#             */
/*   Updated: 2016/10/06 13:25:34 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (range);
	}
	range = malloc(sizeof(*range) * (max - min));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
