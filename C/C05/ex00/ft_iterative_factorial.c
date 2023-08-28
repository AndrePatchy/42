/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:48:47 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/12 21:18:33 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			r = r * nb;
			nb--;
		}
		return (r);
	}
}
/*
int	ft_atoi(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	return (r);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Factorial: %d\n", ft_iterative_factorial(ft_atoi(argv[1])));
	}
	return (0);
}*/
