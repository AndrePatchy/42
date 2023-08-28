/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:20:14 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/02 10:08:44 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	x;

	x = 10;
	printf("Before ft_ft, x: %d\n", x);
	ft_ft(&x);
	printf("After ft_ft, x: %d\n", x);
}*/

/*int 	main(void)
{
	int	x;
	
	int	*ptr;
	
	x = 10;
	ptr = &x;

	printf("Address of variable x:%p\n", ptr);
	printf("Value of variable x:%d\n", *ptr);
	return (0);
}*/
