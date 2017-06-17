/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 17:58:44 by atrush            #+#    #+#             */
/*   Updated: 2016/10/01 18:14:01 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb > 12) || (nb < 0))
	{
		return (0);
	}
	else if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (1);
	}
}
