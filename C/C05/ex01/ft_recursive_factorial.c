/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:25:08 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/12 21:20:53 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb < 2)
	{
		return (1);
	}
	else
	{
		r = ft_recursive_factorial(nb - 1) * nb;
	}
	return (r);
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
		printf("Factorial: %d\n", ft_recursive_factorial(ft_atoi(argv[1])));
	}
	return (0);
}*/
