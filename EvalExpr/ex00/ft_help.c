/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 20:19:46 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 20:39:31 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

s_calc  mas[100];

int		ft_find(int i, int flag)
{
	while (mas[i].znak != 'n')
	{
		i = i + flag;
	}
	mas[i].znak = 'p';
	return (mas[i].nbr);
}

int		ft_check(char *str, int i)
{
	if (((str[i] >= '0') && (str[i] <= '9'))
			|| ((str[i] == '-') && (str[i + 1] != ' ')))
	{
		mas[i].nbr = ft_atoi(&str[i]);
		mas[i].znak = 'n';
		mas[i].lvl = 0;
		while ((str[i + 1] >= '0') && (str[i + 1] <= '9'))
			mas[++i].znak = 'p';
	}
	else if ((str[i] == '+') || (str[i] == '-'))
	{
		mas[i].znak = str[i];
		mas[i].lvl = 1;
	}
	else if ((str[i] == '*') || (str[i] == '/') || (str[i] == '%'))
	{
		mas[i].znak = str[i];
		mas[i].lvl = 2;
	}
	else
		mas[i].znak = 'p';
	return (i);
}

void	ft_br_lvl(char *str)
{
	int i;
	int k;

	i = 0;
	while (str[i])
	{
		k = 1;
		if (str[i] == '(')
			while (str[i + k])
			{
				if ((mas[i + k].znak != 'p') && (mas[i + k].znak != 'n'))
					mas[i + k].lvl += 2;
				k++;
			}
		else if (str[i] == ')')
			while (str[i + k])
			{
				if ((mas[i + k].znak != 'p') && (mas[i + k].znak != 'n'))
					mas[i + k].lvl -= 2;
				k++;
			}
		i++;
	}
}

int 	ft_find_max_result(char *str, int flag)
{
	int max;
	int i;

	i = 0;
	max = 0;
	if (flag == 1)
	while (str[i])
	{
		if (mas[i].lvl > max)
			max = mas[i].lvl;
		i++;
	}
	else
	while (str[i])
	{
		if (mas[i].znak == 'n')
			return (mas[i].nbr);
		i++;
	}
	return (max);
}

int		ft_do_op(char *str, int i)
{
	int max;

	max = ft_find_max_result(str, 1) + 1;
	while (--max > 0)
	{
		i = -1;
		while(str[++i])
			if (mas[i].lvl == max)
			{
				if (mas[i].znak == '+')
					mas[i].nbr = ft_find(i, -1) + ft_find(i, 1);
				if (mas[i].znak == '-')
					mas[i].nbr = ft_find(i, -1) - ft_find(i, 1);
				if (mas[i].znak == '*')
					mas[i].nbr = ft_find(i, -1) * ft_find(i, 1);
				if (mas[i].znak == '/')
					mas[i].nbr = ft_find(i, -1) / ft_find(i, 1);
				if (mas[i].znak == '%')
					mas[i].nbr = ft_find(i, -1) % ft_find(i, 1);
				mas[i].znak = 'n';
				mas[i].lvl = 0;
			}
	}
	return (ft_find_max_result(str, 0));
}
