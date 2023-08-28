/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:09 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/03 12:48:48 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < 100)
	{
		write(1, "%02d %02d\n", i, j);
		j++;
		if (j >= 100)
		{
			i++;
			j = i + 1;
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
