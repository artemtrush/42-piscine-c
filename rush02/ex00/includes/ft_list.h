/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 19:55:32 by atrush            #+#    #+#             */
/*   Updated: 2016/10/16 14:42:25 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list	*ft_create_elem(char data);

#endif
