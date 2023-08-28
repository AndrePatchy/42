/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:03:16 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/01 14:48:46 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	s;
	int	e;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		x = tab[s];
		tab[s] = tab[e];
		tab[e] = x;
		s++;
		e--;
	}
}
/*
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size;

	size = sizeof(array) / sizeof(array[0]);
	printf("Original Array: ");
	for (int i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}

	ft_rev_int_tab(array, size);

	printf("\nReversed Array: ");

	for (int i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n");

	return (0);
}*/
