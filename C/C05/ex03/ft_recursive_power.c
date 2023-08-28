/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:03:50 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/12 18:39:50 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
}
/*
int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	s = 1;
	r = 0;
	i = 0;
	if (str[0] == '-')
	{
		s = s * - 1;
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
		printf("%d\n", ft_recursive_power(ft_atoi(argv[1]), ft_atoi(argv[2])));
	}
	return (0);
}*/
