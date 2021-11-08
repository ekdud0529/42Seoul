/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:17:54 by daykim            #+#    #+#             */
/*   Updated: 2021/10/10 20:17:57 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c, int n);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	while (col <= y && x > 0)
	{
		row = 1;
		while (row <= x)
		{
			if (col == 1 && row == 1)
				ft_putchar('/', 1);
			else if (row == x && col == y && y != 1 && x != 1)
				ft_putchar('/', 1);
			else if ((row == 1 && col == y) || (row == x && col == 1))
				ft_putchar('\\', 1);
			else if (row != 1 && row != x && col != y && col != 1)
				ft_putchar(' ', 1);
			else
				ft_putchar('*', 1);
			row++;
		}
		col++;
		ft_putchar ('\n', 1);
	}
}
