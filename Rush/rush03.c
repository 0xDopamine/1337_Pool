/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:38:11 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/08/08 18:36:11 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printing(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		write(1, "Error", 5);
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			printing(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	printing(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == y))
		ft_putchar('A');
	else if ((i == x && j == y) || (i == x && j == 1))
		ft_putchar('C');
	else if ((i > 1 && i < x) && (j == 1 || j == y))
		ft_putchar('B');
	else if ((j > 1 && j < y) && (i == 1 || i == x))
		ft_putchar('B');
	else
		ft_putchar(' ');
}
