/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 14:05:40 by atrush            #+#    #+#             */
/*   Updated: 2016/10/11 16:03:21 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	if (length < 3)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			break ;
		if (i == length - 2)
			return (1);
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			break ;
		if (i == length - 2)
			return (1);
		i++;
	}
	return (0);
}
