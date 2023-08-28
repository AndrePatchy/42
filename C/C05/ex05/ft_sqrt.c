/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:01:48 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/14 17:18:34 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb == 1)
	{
		return (1);
	}
	while (i <= 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0); 
}

int	main(void)
{
	int	x;

	x = 225;
	printf("Result: %d", ft_sqrt(x));
	return (0);
}
