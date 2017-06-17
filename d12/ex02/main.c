/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 19:37:47 by atrush            #+#    #+#             */
/*   Updated: 2016/10/13 21:58:48 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

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

void	ft_putstr(char *str, int k)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(k, &str[i], 1);
		i++;
	}
}

void	ft_print_error(char *str)
{
	ft_putstr("ft_tail: ", 2);
	ft_putstr(str, 2);
	ft_putstr(": No such file or directory\n", 2);
	errno = 0;
}

void	ft_print(int i, int argc, char **argv, int size, int fdir, char *buf)
{
	int end_size;

	if (i != 3)
		write(1, "\n", 1);
	if (argc > 4)
	{
		ft_putstr("==> ", 1);
		ft_putstr(argv[i], 1);
		ft_putstr(" <==\n", 1);
	}
	if (size > 0)
	{
		while (1)
		{
			end_size = read(fdir, buf, size);
			if (end_size < size)
				break ;
		}
		write(1, buf + end_size, size - end_size);
		write(1, buf, end_size);
	}
	close(fdir);
}

int		main(int argc, char **argv)
{
	int		fdir;
	int		i;
	int		size;
	char	*buf;

	i = 3;
	if ((argc < 4) || (argv[1][0] != '-') || (argv[1][1] != 'c'))
		return (0);
	size = atoi(argv[2]);
	buf = malloc(sizeof(char) * (size + 1));
	while (i < argc)
	{
		fdir = open(argv[i], O_RDONLY);
		if (errno == ENOENT)
			ft_print_error(argv[i]);	
		else
			ft_print(i, argc, argv, size, fdir, buf);
		i++;
	}
	free(buf);
	return (0);
}
