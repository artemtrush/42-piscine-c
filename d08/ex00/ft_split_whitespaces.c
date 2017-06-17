/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 21:56:48 by atrush            #+#    #+#             */
/*   Updated: 2016/10/08 22:11:07 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nb_words(char *str)
{
	int i;
	int j;
	int nk;

	i = 0;
	j = 0;
	nk = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		{
			i++;
			j = 1;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		{
			if (j == 1)
				nk++;
			j = 0;
			i++;
		}
	}
	return (nk);
}

int		ft_strlen(char *str, int i)
{
	int nk;

	nk = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		nk++;
		i++;
	}
	return (nk);
}

char	**ft_split_whitespaces(char *str)
{
	char	**mas;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((mas = malloc(sizeof(char*) * (ft_nb_words(str) + 1))) == 0)
		return (0);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((mas[j] = malloc(sizeof(char) * ft_strlen(str, i) + 1)) == 0)
				return (0);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				mas[j][k++] = str[i++];
			mas[j++][k] = '\0';
		}
	}
	mas[j] = 0;
	return (mas);
}
