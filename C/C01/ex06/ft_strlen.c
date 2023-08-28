/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:47:53 by andos-sa          #+#    #+#             */
/*   Updated: 2023/07/30 17:30:17 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++; 
		str++; 
	}
	return (count); 
}
/*
int	main(void)
{
	char	*msg;
	int	len;

	msg = "Hi 42!!";
	len = ft_strlen(msg);
	printf("Length of the string: %d\n", len);
	return (0);
}
*/
