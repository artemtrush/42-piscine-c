/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 15:00:23 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 15:00:31 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all_rush.h"

void	rush04(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		ft_print_str('A', 'B', 'C', x - 2);
		while ((y - 2) > 0)
		{
			ft_print_str('B', ' ', 'B', x - 2);
			y--;
		}
		if (y > 1)
			ft_print_str('C', 'B', 'A', x - 2);
	}
}

void	ft_print_str(char beg, char mid, char end, int size_mid)
{
	ft_putchar(beg);
	while (size_mid > 0)
	{
		ft_putchar(mid);
		size_mid--;
	}
	if (size_mid > -1)
		ft_putchar(end);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush04(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
