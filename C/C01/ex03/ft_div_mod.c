/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:54:28 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/09 11:12:29 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 2;
	b = 2;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);

	printf("The value of a / b: %d\n", div);
	printf("The value of a %% b: %d\n", mod);

	return (0);
}

