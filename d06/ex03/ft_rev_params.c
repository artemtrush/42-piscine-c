/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 12:45:26 by atrush            #+#    #+#             */
/*   Updated: 2016/10/05 18:41:19 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int count;

	count = argc - 1;
	while (count > 0)
	{
		i = 0;
		while (argv[count][i] != '\0')
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		count--;
		ft_putchar('\n');
	}
	return (0);
}
