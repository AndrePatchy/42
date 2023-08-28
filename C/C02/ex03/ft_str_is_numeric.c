/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:09:13 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/04 15:09:35 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	check;

	if (*str == '\0')
	{
		return (1);
	}
	check = 1;
	while (*str != '\0')
	{
		if ((*str < 48 || *str > 57))
			check = 0;
		str++;
	}
	return (check);
}
/*
int     main(void)
{
        char    *x; 
        int     lol;

        x = "";
        lol = ft_str_is_numeric(x);
        printf("%i", lol);
        return (0);
}
*/
