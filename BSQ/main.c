/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 15:45:49 by atrush            #+#    #+#             */
/*   Updated: 2016/10/19 19:22:14 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	g_i;
int	g_j;
int	g_a;
int g_size;

char	**ft_create_mas(char *str, char sym[3], int *n, int argc)
{
	char	**mas;
	int		i;
	int		fdir;

	i = 0;
	g_a = 0;
	g_i = 0;
	g_j = 0;
	if ((fdir = ft_open(sym, n, argc, str)) == -1)
		return (0);
	mas = malloc(sizeof(char*) * (*n));
	if (ft_create_list(&mas[i], fdir))
		return (0);
	g_size = ft_strlen(mas[i]);
	while (++i < (*n))
	{
		mas[i] = malloc(sizeof(char) * (g_size + 1));
		read(fdir, mas[i], g_size + 1);
	}
	if (fdir != 0)
		close(fdir);
	return (mas);
}

int		ft_a_check(int x, int y, char sym[3], char **mas)
{
	int a;
	int i;

	a = 1;
	while ((a <= x) && (a <= y))
	{
		i = 0;
		while (i < a + 1)
		{
			if (mas[x - i][y - a] == sym[1])
				return (a);
			i++;
		}
		i = 0;
		while (i < a + 1)
		{
			if (mas[x - a][y - i] == sym[1])
				return (a);
			i++;
		}
		a++;
	}
	return (a);
}

void	ft_find_sqr(char **mas, int n, char sym[3])
{
	int tmp;
	int i;
	int j;

	i = n - 1;
	while (i >= 0)
	{
		j = g_size - 1;
		while (j >= 0)
		{
			if (mas[i][j] == sym[0])
			{
				tmp = ft_a_check(i, j, sym, mas);
				if (tmp >= g_a)
				{
					g_a = tmp;
					g_i = i;
					g_j = j;
				}
			}
			j--;
		}
		i--;
	}
}

void	ft_make_result(char ***mas, char sym[3])
{
	int i;
	int a;

	a = 1;
	if ((*mas)[g_i][g_j] == sym[0])
		(*mas)[g_i][g_j] = sym[2];
	while (a < g_a)
	{
		i = 0;
		while (i < a + 1)
		{
			(*mas)[g_i - i][g_j - a] = sym[2];
			i++;
		}
		i = 0;
		while (i < a + 1)
		{
			(*mas)[g_i - a][g_j - i] = sym[2];
			i++;
		}
		a++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	char	**mas;
	char	sym[3];

	(argc != 1) ? (i = 1) : 1;
	(argc == 1) ? (i = 0) : 1;
	while (i < argc)
	{
		mas = ft_create_mas(argv[i], sym, &n, argc);
		if ((i > 1) && (i < argc))
			write(1, "\n", 1);
		if ((mas) && (ft_check(&mas, n, g_size, sym)))
		{
			ft_find_sqr(mas, n, sym);
			ft_make_result(&mas, sym);
			ft_print_result(mas, n, g_size);
		}
		else
			write(2, "map error\n", 10);
		free(mas);
		i++;
	}
	return (0);
}
