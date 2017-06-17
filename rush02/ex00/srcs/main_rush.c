/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 12:53:31 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 14:54:54 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all_rush.h"

void	ft_create_pat(char pat[10], char *tmp)
{
	int i;

	i = 0;
	while (i < 10)
	{
		pat[i] = tmp[i];
		i++;
	}
}

void	ft_compare(char *str, int *mas)
{
	int		i;
	char	pat[5][10];

	ft_create_pat(pat[0], "o-o| |o-o");
	ft_create_pat(pat[1], "/*\\* *\\*/");
	ft_create_pat(pat[2], "ABAB BCBC");
	ft_create_pat(pat[3], "ABCB BABC");
	ft_create_pat(pat[4], "ABCB BCBA");
	i = -1;
	while (++i < 5)
		*(mas + i) = ft_true_false(str, i, pat);
}

int		main(void)
{
	int		mas[5];
	char	*str;

	ft_create_list(&str);
	if (str)
	{
		ft_size(str);
		ft_compare(str, &mas[0]);
		ft_print_result(mas);
		free(str);
	}
	else
		write(1, "aucune",6);
	ft_putchar('\n');
	return (0);
}
