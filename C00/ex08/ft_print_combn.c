/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:10:15 by daykim            #+#    #+#             */
/*   Updated: 2021/10/13 19:19:47 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_number[9];

void	front_putc(int repetition, char	start, int	end)
{
	char	comma;
	char	space;
	int		cnt;

	cnt = 0;
	comma = ',';
	space = ' ';
	while (repetition--)
		write(1, &g_number[cnt++], 1);
	write(1, &start, 1);
	if (end)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	recursion(int	n, int	position, int start, int	end)
{
	if (position + 1 == n)
	{
		while (start < 10)
		{
			g_number[start] = start + '0';
			front_putc(n - 1, start + '0', end);
			start++;
		}
	}
	else
	{
		while (start < 10)
		{
			if (start == 10 - n && position == 0)
				end = 0;
			g_number[position] = start + '0';
			recursion(n, position + 1, start + 1, end);
			start++;
		}
	}
}

void	ft_print_combn(int	n)
{
	recursion(n, 0, 0, 1);
}
