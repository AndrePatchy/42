/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:34:07 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/14 15:14:12 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int num, char **string)
{
	char	*tmp;
	int		x;
	int		sorted;
	int		s;

	x = 0;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		s = 0;
		while (s < num - 1)
		{
			x = ft_strcmp(string[s], string[s + 1]);
			if (x > 0)
			{
				tmp = string[s];
				string[s] = string[s + 1];
				string[s + 1] = tmp;
				sorted = 0;
			}
			s++;
		}
	}
}

void	ft_print(char *argv[])
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (argv[k])
	{
		i = 0;
		while (argv[k][i])
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		return (0);
	}
	ft_sort_params(argc - 1, argv + 1);
	ft_print(argv);
	return (0);
}
