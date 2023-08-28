/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:00:42 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/12 22:27:22 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

INT_MIN INT_MAX 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putvet(int vet[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(vet[i] + '0');
		i++;
	}
}

int	ft_get_index(int combn[], int n)
{
	int	c;
	int	max;

	c = 0;
	max = 10 - n;
	while (c < n)
	{
		if (combn[c] == max)
		{
			return (c);
		}
		if (c == (n - 1) && combn[c] < max)
		{
			return (c);
		}
		c++;
		max++;
	}
	return (-1);
}

void 	ft_increment(int vet[], int n, int index)
{
	int	c;

	c = index + 1;
	vet[index]++;
	while (c <= n)
	{
		vet[c] = vet[c - 1] + 1;
	}
}

void	ft_print_combn(int n)
{
	
}
