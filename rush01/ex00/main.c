/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrush <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/09 13:02:12 by atrush            #+#    #+#             */
/*   Updated: 2016/10/09 20:22:49 by atrush           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_put_sudok(int ***mas, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while(j < 9)
		{
			if (argv[i + 1][j] == '.')
				(*mas)[i][j] = 0;
			else
				(*mas)[i][j] = argv[i + 1][j] - 48;
			j++;
		}
		i++;
	}

}

int ft_check(int k, int ***mas, int i, int j)
{
	int I;
	int J; 
	int ik;
	int jk; 

	I = 0;
	J = 0; 
	while (I < 9)
	{
		if ((k == (*mas)[I][j]) && (I != i))
			return (0);
		I++;
	}
	while (J < 9)
	{
		if ((k == (*mas)[i][J]) && (J != j))
			return (0);
		J++;
	}
	I = (i / 3) * 3;
	J = (j / 3) * 3;
	ik = I + 2;
	jk = J + 2;
	while (I <= ik)
	{
		J = (j /3)* 3;
		while (J <= jk)
		{	
			if(k == (*mas)[I][J])
				return (0);
			J++;
		}
		I++;
	}
	(*mas)[i][j] = k;
	return (1);
}

void	ft_print_sudok(int **mas)
{
	int i;
	int j;
	char c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while(j < 9)
		{
			c = mas[i][j] + 48;
			write(1, &c, 1);
			if (j != 8)
				write(1, " ",1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void ft_timeout(int ***mas)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	while(i < 9)
	{
		j = 0;
		while(j < 9)
		{	
			if((*mas)[i][j] == 0)
			{
				k = 1;
				while(k <= 9) 
				{
					if(ft_check(k, mas,i,j))
						break ;
					k++;
				}
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int **mas;
	int i;

	i = -1;
	mas = (int**)malloc(sizeof(int*) * 9);
	while(++i < 9)
		mas[i] = malloc(sizeof(int) * 9);
	if(argc != 10)
	{
		return 0;
	}
	ft_put_sudok(&mas,argv);
	ft_timeout(&mas);
	ft_print_sudok(mas);
	free(mas);
	return (0);
}
