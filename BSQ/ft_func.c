/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 17:46:53 by atrush            #+#    #+#             */
/*   Updated: 2016/10/19 19:42:01 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int		ft_atoi_and_sym(char *str, char sym[3])
{
	int v;
	int i;
	int k;

	i = 0;
	v = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		v = v * 10;
		v = (str[i++] - 48) + v;
	}
	k = 0;
	while (k < 3)
		if ((str[i]) && (str[i] != '\n'))
			sym[k++] = str[i++];
		else
			return (0);
	(str[i] == '\0') ? 1 : (v = 0);
	return (v);
}

int		ft_open(char sym[3], int *n, int argc, char *str)
{
	char	*props;
	int		fdir;

	if (argc == 1)
		fdir = 0;
	else if ((fdir = open(str, O_RDONLY)) == -1)
		return (-1);
	if (ft_create_list(&props, fdir))
		return (-1);
	*n = ft_atoi_and_sym(props, sym);
	free(props);
	if (*n == 0)
		return (-1);
	return (fdir);
}

void	ft_print_result(char **mas, int n, int m)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			write(1, &mas[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_check(char ***mas, int n, int m, char sym[3])
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			if (((*mas)[i][j] != sym[0]) && ((*mas)[i][j] != sym[1]))
				return (0);
			j++;
		}
		if (i != 0)
		{
			if ((*mas)[i][j] == '\n')
				(*mas)[i][j] = '\0';
			else
				return (0);
		}
		i++;
	}
	return (1);
}
