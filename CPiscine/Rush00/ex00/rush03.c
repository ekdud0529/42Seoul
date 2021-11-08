/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:18:25 by daykim            #+#    #+#             */
/*   Updated: 2021/10/10 20:18:27 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c, int repetition);

void	rush(int x, int y)
{
	int	cnt_y;

	cnt_y = 1;
	while (cnt_y <= y && x > 0)
	{
		if (cnt_y == 1 || cnt_y == y)
		{
			ft_putchar('A', 1);
			ft_putchar('B', x - 2);
			if (x > 1)
				ft_putchar('C', 1);
		}
		else
		{
			ft_putchar('B', 1);
			ft_putchar(' ', x - 2);
			if (x > 1)
				ft_putchar('B', 1);
		}
		ft_putchar('\n', 1);
		cnt_y++;
	}
}
