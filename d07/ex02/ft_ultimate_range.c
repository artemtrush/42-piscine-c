/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 20:15:51 by atrush            #+#    #+#             */
/*   Updated: 2016/10/06 15:07:55 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
	}
	else
	{
		*range = malloc(sizeof(int) * (max - min));
		if (*range == 0)
			return (0);
		while (min < max)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
	}
	return (i);
}
