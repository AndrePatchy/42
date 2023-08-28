/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:49:28 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/14 11:51:35 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (p <= (nb / 2))
	{
		if (nb % p == 0)
		{
			return (0);
		}
		p++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
int	main()
{
	printf("%d\n", ft_find_next_prime(24));
	return (0);
}*/
