/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 14:59:14 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 14:59:21 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all_rush.h"

int g_x;
int g_y;

void	ft_print_result(int mas[])
{
	int i;
	int k;

	i = -1;
	while (++i < 5)
		if (mas[i])
		{
			k = -1;
			while (++k < i)
				if (mas[k])
				{
					write(1, " || ", 4);
					break ;
				}
			write(1, "[rush-0", 7);
			ft_putchar(i + 48);
			write(1, "] [", 3);
			ft_putnbr(g_x);
			write(1, "] [", 3);
			ft_putnbr(g_y);
			write(1, "]", 1);
		}
	if ((mas[0] + mas[1] + mas[2] + mas[3] + mas[4]) == 0)
		write(1, "aucune", 6);
}

void	ft_size(char *str)
{
	int i;

	i = 0;
	g_x = 0;
	g_y = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
		{
			g_x++;
			i++;
		}
		i++;
		g_y++;
	}
	if (g_y)
		g_x = g_x / g_y;
}

int		ft_check_str(char *str, char beg, char mid, char end)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[i++] != beg)
		return (0);
	while (j < g_x - 2)
	{
		if (str[i] != mid)
			return (0);
		j++;
		i++;
	}
	if (g_x > 1)
		if (str[i] != end)
			return (0);
	return (1);
}

int		ft_true_false(char *str, int n, char pat[5][10])
{
	int y;
	int i;

	i = 1;
	y = g_y;
	if ((g_x > 0) && (g_y > 0))
	{
		if (!ft_check_str(&str[0], pat[n][0], pat[n][1], pat[n][2]))
			return (0);
		while ((y - 2) > 0)
		{
			if (!ft_check_str(&str[(g_x + 1) * i], pat[n][3], pat[n][4], pat[n][5]))
				return (0);
			y--;
			i++;
		}
		if (y > 1)
			if (!ft_check_str(&str[(g_x + 1) * i], pat[n][6], pat[n][7], pat[n][8]))
				return (0);
		return (1);
	}
	return (0);
}
