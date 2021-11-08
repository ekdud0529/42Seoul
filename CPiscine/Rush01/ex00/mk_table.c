/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_table.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:17:12 by daykim            #+#    #+#             */
/*   Updated: 2021/10/17 18:14:41 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int	check_height(int	table[][4], int	height[]);
extern int	check_overlap(int	table[][4]);

int	g_depth = 0;

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_table(int cur_tb[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_put_char(cur_tb[i][j] + '0');
			if (j != 3)
				ft_put_char(' ');
			++j;
		}
		ft_put_char('\n');
		++i;
	}
}

void	ft_mktable_24_init(int	N, int	*table, int	tb_24[24][4])
{
	int	i;
	int	temp;

	if (N == 3)
	{
		i = -1;
		while (++i < 4)
			tb_24[g_depth][i] = table[i];
		++g_depth;
	}
	else
	{
		i = N;
		while (i < 4)
		{
			temp = table[i];
			table[i] = table[N];
			table[N] = temp;
			ft_mktable_24_init(N + 1, table, tb_24);
			temp = table[i];
			table[i] = table[N];
			table[N] = temp;
			++i;
		}
	}
}

int	rec_tb(int	cur_tb[][4], int	tb_24[][4], int	input[], int	d)
{
	int	i;
	int	j;

	i = 0;
	while (i < 24)
	{
		if (g_depth == -1)
			return (g_depth);
		j = -1;
		while (++j < 4)
			cur_tb[d][j] = tb_24[i][j];
		if (d == 3)
		{
			if (check_overlap(cur_tb) && check_height(cur_tb, input))
			{
				g_depth = -1;
				return (g_depth);
			}
		}
		else
			rec_tb(cur_tb, tb_24, input, d + 1);
		++i;
	}
	return (g_depth);
}

int	input_table_init(char	*ch_array, int	int_array[16], int	table[4])
{
	int	i;
	int	cnt;

	i = -1;
	cnt = 0;
	while (++i < 4)
		table[i] = i + 1;
	i = 0;
	while (ch_array[i])
	{
		if ('0' <= ch_array[i] && ch_array[i] <= '9')
		{
			int_array[cnt] = (int)(ch_array[i] - '0');
			++cnt;
		}
		++i;
	}
	if (cnt != 16)
		return (0);
	return (1);
}
