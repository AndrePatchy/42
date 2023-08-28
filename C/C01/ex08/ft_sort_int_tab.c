/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:38:11 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/01 11:51:29 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	sorted;
	int	i;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
	}
}

/*int	main(void)
{
	int	a[] = {9, 5, 3, 7, 8, 4, 2, 1, 6};
	int	i;
	int	size;

	size = sizeof(a) / sizeof(a[0]);
	
	printf("Original Array: ");
	
	i = 0;
	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
	
	ft_sort_int_tab(a, size);

	printf("\nSorted Array: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}

	printf("\n");

	return (0);
}*/
