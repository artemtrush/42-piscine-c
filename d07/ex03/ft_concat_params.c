/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 15:11:08 by atrush            #+#    #+#             */
/*   Updated: 2016/10/06 20:06:52 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_concat_params(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
		while (i < argc - 1)
		{
			ft_strcat(argv[i], argv[i + 1]);
			i++;
		}
	if (argc < 2)
		argv[1] = "";
	return (argv[1]);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int t;

	i = 0;
	t = 0;
	while (dest[i] != '\0')
		i++;
	dest[i++] = '\n';
	while (src[t] != '\0')
	{
		dest[i + t] = src[t];
		t++;
	}
	dest[i + t] = '\0';
	return (dest);
}
