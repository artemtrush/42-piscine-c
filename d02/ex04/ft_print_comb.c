/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:08:16 by atrush            #+#    #+#             */
/*   Updated: 2016/09/29 15:42:54 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int k;
	int z;

	i = 47;
	while (i++ < 55)
	{
		k = i;
		while (k++ < 56)
		{
			z = k;
			while (z++ < 57)
			{
				ft_putchar(i);
				ft_putchar(k);
				ft_putchar(z);
				if ((i + k + z) != 168)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
