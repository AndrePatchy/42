/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:33:34 by gamado-f          #+#    #+#             */
/*   Updated: 2023/07/30 19:07:44 by jopedro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_final(int x, int y)
{
	int	i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar(92);
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('*');
			i++;
		}
		if (x > 1)
			ft_putchar('/');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	ft_middle(int x, int y)
{
	int	i;
	int	count;

	if (y > 1)
	{
		count = 0;
		while (count < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('*');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				i++;
			}
			if (x > 1)
				ft_putchar('*');
			count++;
		}
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
		ft_putchar('/');
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1 && y > 0)
		ft_putchar(92);
	ft_middle(x, y);
	ft_final(x, y);
}
