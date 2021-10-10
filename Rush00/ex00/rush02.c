/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:18:13 by daykim            #+#    #+#             */
/*   Updated: 2021/10/10 20:18:16 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c, int repetition);

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
			if ((col == 1 && row == 1) || (col == 1 && row == x))
				ft_putchar('A', 1);
			else if ((row == 1 && col == y) || (row == x && col == y))
				ft_putchar('C', 1);
			else if (row != 1 && row != x && col != y && col != 1)
				ft_putchar(' ', 1);
			else
				ft_putchar('B', 1);
			row++;
		}
		col++;
		ft_putchar ('\n', 1);
	}
}
