/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:59:03 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/17 14:37:07 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_length(char *str);

int	ft_merdlen(int size, char **dest)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_length(dest[i]);
		i++;
	}
	return (len);
}

char	*ft_strcat(char **dest, int size, char *sep)
{
	char	*strings;
	int		i;
	int		j;
	int		len;
	int		str_counter;

	i = 0;
	str_counter = 0;
	len = ft_merdlen(size, dest);
	strings = (char *)malloc(len + (ft_length(sep) * size -1) + 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		if ((i != 0) && (i != size))
			while (sep[j] != '\0')
				strings[str_counter++] = sep[j++];
		j = 0;
		while (dest[i][j] != '\0')
			strings[str_counter++] = dest[i][j++];
		i++;
	}
	strings[str_counter] = '\0';
	return (strings);
}

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all_strings;

	all_strings = ft_strcat(strs, size, sep);
	return (all_strings);
}
/*
int	main(void)
{
	char	*strings[] = {"42", "is killing my brains", "bruh"};
	char	*sep;
	int	size;
	char	*result;

	size = 3;
	sep = "; ";
	result = ft_strjoin(size, strings, sep);
	printf("%s", result);
	return (0);
}*/
