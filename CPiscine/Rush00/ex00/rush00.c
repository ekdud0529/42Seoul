/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:17:15 by daykim            #+#    #+#             */
/*   Updated: 2021/10/10 20:17:19 by daykim           ###   ########.fr       */
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
			ft_putchar('o', 1);
			ft_putchar('-', x - 2);
			if (x > 1)
				ft_putchar('o', 1);
		}
		else
		{
			ft_putchar('|', 1);
			ft_putchar(' ', x - 2);
			if (x > 1)
				ft_putchar('|', 1);
		}
		ft_putchar('\n', 1);
		cnt_y++;
	}
}
