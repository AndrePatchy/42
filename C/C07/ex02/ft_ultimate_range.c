/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:02:49 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/17 14:38:10 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	s;

	i = -1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	s = max - min;
	*range = (int *)malloc((s) * sizeof(*range));
	if (*range == NULL)
		return (-1);
	else
	{
		while (++i < s)
		{
			range[0][i] = min + i;
		}
	}
	return (s);
}
/*
int	main(void)
{
	int	result;
	int	min;
	int	max;
	int	*range;

	min = 0;
	max = 51;
	result = ft_ultimate_range(&range, min, max);
	printf("The size of range is: %d", result);
	return (0);
}*/
