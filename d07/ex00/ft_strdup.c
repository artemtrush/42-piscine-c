/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 18:08:11 by atrush            #+#    #+#             */
/*   Updated: 2016/10/06 13:11:46 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char *str;

	str = malloc(sizeof(*str) * (ft_strlen(src) + 1));
	if (str == 0)
		return (0);
	ft_strcpy(str, src);
	return (str);
}

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
