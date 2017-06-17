/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 18:52:19 by atrush            #+#    #+#             */
/*   Updated: 2016/10/06 19:24:22 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if ((hour >= 0) && (hour < 24))
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((hour > 0) && (hour < 11))
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if ((hour > 12) && (hour < 23))
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	else if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
