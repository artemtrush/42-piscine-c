/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 19:07:31 by atrush            #+#    #+#             */
/*   Updated: 2016/10/02 19:47:48 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_str(char beg, char mid, char end, int size_mid);

void	rush(int x, int y)
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
			ft_print_str('A', 'B', 'C', x - 2);
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
