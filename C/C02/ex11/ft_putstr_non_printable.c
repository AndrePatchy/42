/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:08:14 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/08 14:08:01 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_char(unsigned char c)
{
	char	hex[16];
	char	aux1;
	char	aux2;

	hex[0] = '0';
	hex[1] = '1';
	hex[2] = '2';
	hex[3] = '3';
	hex[4] = '4';
	hex[5] = '5';
	hex[6] = '6';
	hex[7] = '7';
	hex[8] = '8';
	hex[9] = '9';
	hex[10] = 'a';
	hex[11] = 'b';
	hex[12] = 'c';
	hex[13] = 'd';
	hex[14] = 'e';
	hex[15] = 'f';
	aux1 = hex[c / 16];
	aux2 = hex[c % 16];
	ft_putchar(aux1);
	ft_putchar(aux2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else 
		{
			ft_putchar('\\');
			hex_char(str[i]);
		}
		i++;
	}
}
/*
int	main()
{
	char	*s;

	s = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(s);
	return (0); 
}*/
