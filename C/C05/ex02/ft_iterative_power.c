/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:47:42 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/12 21:45:49 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 1)
		{
			nb = nb * i;
			power--;
		}
	}
	return (nb);
}
/*
int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	if (str[0] == '-')
	{
		s = s * -1;
		i++;
	}
	while (str[i] != '\0')
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	return (r * s);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("Result: %d", ft_iterative_power(ft_atoi(argv[1]), ft_atoi(argv[2])));
	}
	return (0);
}*/
