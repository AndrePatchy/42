/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:45:33 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/08 13:18:26 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	check;

	check = 1;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
			check = 0;
		str++;
	}
	return (check);
}
/*
int	main(void)
{
	char	*x;
	int	lol;

	x = "az";
	lol = ft_str_is_alpha(x);
	printf("%i", lol);
	return (0);
}*/
