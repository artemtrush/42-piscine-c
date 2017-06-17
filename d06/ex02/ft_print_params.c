/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 12:22:38 by atrush            #+#    #+#             */
/*   Updated: 2016/10/05 18:40:43 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int count;

	count = 1;
	while (count < argc)
	{
		i = 0;
		while (argv[count][i] != '\0')
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		count++;
		ft_putchar('\n');
	}
	return (0);
}
