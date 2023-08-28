/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:02:38 by andos-sa          #+#    #+#             */
/*   Updated: 2023/07/30 16:25:27 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = tmp / *b;
		*b = tmp % *b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 0; 

	printf("Before ft_ultimate_div_mod: a = %d, b = %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("After ft_ultimate_div_mod: a = %d, b = %d\n", a, b);
	return (0);
}
*/
