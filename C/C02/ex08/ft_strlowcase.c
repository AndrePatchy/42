/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:44:18 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/08 14:06:58 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z') 
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char    str[] = "43243242";
    
        ft_strlowcase(str);
        printf("%s\n", str);
        return (0);
}*/
