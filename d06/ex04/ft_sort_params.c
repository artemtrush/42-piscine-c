/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 13:50:32 by atrush            #+#    #+#             */
/*   Updated: 2016/10/05 18:41:49 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2);

void	ft_swap(int *a, int *b);

int		main(int argc, char *argv[])
{
	int mas[argc - 1];
	int i;
	int j;

	i = -1;
	while (++i < argc)
		mas[i - 1] = i;
	i = -1;
	while (++i < argc - 1)
	{
		j = -1;
		while (++j < argc - 2)
			if (ft_strcmp(&argv[mas[j]][0], &argv[mas[j + 1]][0]) > 0)
				ft_swap(&mas[j], &mas[j + 1]);
	}
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[mas[i]][j] != '\0')
			ft_putchar(argv[mas[i]][j++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
