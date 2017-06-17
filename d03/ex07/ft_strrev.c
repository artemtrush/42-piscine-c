/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 18:54:57 by atrush            #+#    #+#             */
/*   Updated: 2016/09/30 19:05:54 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*ptr;
	char	tmp_char;
	int		size;
	int		count;

	size = 0;
	count = 0;
	while (*str != '\0')
	{
		size = size + 1;
		str = str + 1;
	}
	ptr = str - size;
	str = str - 1;
	while (str > ptr)
	{
		tmp_char = *ptr;
		*ptr = *str;
		*str = tmp_char;
		str = str - 1;
		ptr = ptr + 1;
		count = count + 1;
	}
	ptr = ptr - count;
	return (ptr);
}
