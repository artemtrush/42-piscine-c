/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 21:15:34 by atrush            #+#    #+#             */
/*   Updated: 2016/10/13 21:15:38 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

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

void	ft_print_from_in(void)
{
	char c;

	while(read(0, &c, 1))
		write(1, &c, 1);
}

int		ft_print_error(char *str)
{
	if ((errno == ENOENT) || (errno == EISDIR) || (errno == EACCES))
	{
		ft_putstr("ft_cat: ", 2);
		ft_putstr(str, 2);
		if (errno == ENOENT)
			ft_putstr(": No such file or directory\n", 2);
		else if (errno == EISDIR)
			ft_putstr(": Is a directory\n", 2);
		else
			ft_putstr(": Permission denied\n", 2);
		errno = 0;
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		fdir;
	int		i;
	int		read_size;
	char	buf[4096];

	i = 0;
	if (argc < 2)
		ft_print_from_in();
	else
		while (++i < argc)
		{
			fdir = open(argv[i], O_RDONLY);
			if (ft_print_error(argv[i]))
			{
				while ((read_size = read(fdir, buf, 4096)))
				{	
					if (!ft_print_error(argv[i]))
						break ;
					write(1, buf, read_size);
				}
			}
			close(fdir);
		}
	return (0);
}
