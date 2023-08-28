/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:42:51 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/12 18:04:51 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Matrioskas + naruto 

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
/*
int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	if (str[0] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		r = ((r * 10) + (str[i] - 48));
		i++;
	}
	printf("%d\n", r * s);
	return (r * s);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putnbr(ft_atoi(argv[1]));
	}
	return (0);
}*/
