/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 18:34:20 by atrush            #+#    #+#             */
/*   Updated: 2016/10/03 19:57:26 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			k = 0;
			while (to_find[++k] != '\0')
			{
				if (to_find[k] != str[i + k])
				{
					k = 0;
					break ;
				}
			}
			if (k != 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
