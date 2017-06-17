/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 14:40:54 by atrush            #+#    #+#             */
/*   Updated: 2016/10/13 16:57:05 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fdir;
	char	buf[1];

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fdir = open(argv[1], O_RDONLY);
		if (fdir != -1)
		{
			while (read(fdir, buf, 1))
				write(1, buf, 1);
			close(fdir);
		}
	}
	return (0);
}
