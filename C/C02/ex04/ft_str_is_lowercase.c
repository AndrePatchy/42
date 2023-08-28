/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 01:37:58 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/08 13:21:33 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	check;

	if (*str == '\0')
	{
		return (1);
	}
	check = 1;
	while (*str != '\0')
	{
		if (!((*str >= 97 && *str <= 122)))
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

        x = "azaz";
        lol = ft_str_is_lowercase(x);
        printf("%i", lol);
        return (0);
}*/
