/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 16:04:46 by atrush            #+#    #+#             */
/*   Updated: 2016/10/11 16:54:52 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int v;
	int n;
	int i;

	n = 0;
	i = 0;
	v = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		n = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		v = v * 10;
		v = (str[i] - 48) + v;
		i++;
	}
	if (n == 1)
		return (-v);
	else
		return (v);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbr(21474);
			ft_putnbr(83648);
			return ;
		}
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][0] == '+')
		ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
	else if (argv[2][0] == '-')
		ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	else if (argv[2][0] == '*')
		ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
	else if (argv[2][0] == '/')
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	else if (argv[2][0] == '%')
		if(ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
	else
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
