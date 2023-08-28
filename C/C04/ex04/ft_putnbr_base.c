/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:28:53 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/12 18:16:19 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_validation(char *base)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (base[len])
		len++;
	while (base[i] != '\0')
	{
		if (!((base[i] >= 'A' && base[i] <= 'Z')
				|| (base[i] >= 'a' && base[i] <= 'z')
				|| (base[i] >= '0' && base[i] <= '9'))
			|| (len < 2))
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_printnbr(int nbr, int sis, char *base)
{
	int	x;
	int	a;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	x = nbr / sis;
	a = nbr % sis;
	if (nbr >= sis)
	{
		ft_printnbr(x, sis, base);
	}
	ft_putchar(base[a]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	sis;

	sis = ft_base_validation(base);
	if (sis != 0)
	{
		if (nbr == 0)
			ft_putchar('0');
		ft_printnbr(nbr, sis, base);
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
		i ++;
	}
	return (r * s);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
	}
	return (0);
}*/
