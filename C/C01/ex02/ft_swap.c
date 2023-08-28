/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:13:14 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/01 14:40:29 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	x;
	
	int	y;

	x = 1;
	y = 2;

	printf("x is %i, y is %i\n", x, y);

	ft_swap(&x, &y);
	
	printf("x is %i, y is %i\n", x, y);
}
*/
