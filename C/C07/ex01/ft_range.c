/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:53:30 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/17 14:38:33 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = -1;
	if (min >= max)
		array = NULL;
	else
		array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		while (++i < (max - min))
		{
			array[i] = min + i;
		}
	}
	return (array);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;

	min = 3;
	max = 15;
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", ft_range(min, max)[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
