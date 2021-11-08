/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_height.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:13:38 by daykim            #+#    #+#             */
/*   Updated: 2021/10/17 18:13:40 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_max_h;
int	g_ind_row;
int	g_ind_col;
int	g_cnt;
int	g_check;

int	check_rowup_height(int	table[4][4], int	height[16])
{
	g_check = 1;
	g_ind_col = 0;
	while (g_ind_col < 4 && g_check)
	{
		g_ind_row = 0;
		g_max_h = 0;
		g_cnt = 0;
		while (g_ind_row < 4 && g_check)
		{
			if (g_max_h < table[g_ind_row][g_ind_col])
			{
				g_max_h = table[g_ind_row][g_ind_col];
				g_cnt++;
			}
			g_ind_row++;
		}
		if (height[g_ind_col] != g_cnt)
			g_check = 0;
		g_ind_col++;
	}
	return (g_check);
}

int	check_rowdown_height(int	table[4][4], int	height[16])
{
	int	ind_h;

	ind_h = 4;
	g_check = 1;
	g_ind_col = 0;
	while (g_ind_col < 4 && g_check)
	{
		g_ind_row = 3;
		g_max_h = 0;
		g_cnt = 0;
		while (g_ind_row >= 0 && g_check)
		{
			if (g_max_h < table[g_ind_row][g_ind_col])
			{
				g_max_h = table[g_ind_row][g_ind_col];
				g_cnt++;
			}
			g_ind_row--;
		}
		if (height[ind_h] != g_cnt)
			g_check = 0;
		g_ind_col++;
		ind_h++;
	}
	return (g_check);
}

int	check_colleft_height(int	table[4][4], int	height[])
{
	int	ind_h;

	ind_h = 8;
	g_check = 1;
	g_ind_row = 0;
	while (g_ind_row < 4 && g_check)
	{
		g_ind_col = 0;
		g_max_h = 0;
		g_cnt = 0;
		while (g_ind_col < 4 && g_check)
		{
			if (g_max_h < table[g_ind_row][g_ind_col])
			{
				g_max_h = table[g_ind_row][g_ind_col];
				g_cnt++;
			}
			g_ind_col++;
		}
		if (g_cnt != height[ind_h])
			g_check = 0;
		g_ind_row++;
		ind_h++;
	}
	return (g_check);
}

int	check_colright_height(int	table[4][4], int	height[])
{
	int	ind_h;

	ind_h = 12;
	g_check = 1;
	g_ind_row = 0;
	while (g_ind_row < 4 && g_check)
	{
		g_ind_col = 3;
		g_max_h = 0;
		g_cnt = 0;
		while (g_ind_col >= 0 && g_check)
		{
			if (g_max_h < table[g_ind_row][g_ind_col])
			{
				g_max_h = table[g_ind_row][g_ind_col];
				g_cnt++;
			}
			g_ind_col--;
		}
		if (g_cnt != height[ind_h])
			g_check = 0;
		g_ind_row++;
		ind_h++;
	}
	return (g_check);
}

int	check_height(int	table[][4], int	height[])
{
	int	row_up_check;
	int	row_down_check;
	int	col_left_check;
	int	col_right_check;

	row_up_check = check_rowup_height(table, height);
	row_down_check = check_rowdown_height(table, height);
	col_left_check = check_colleft_height(table, height);
	col_right_check = check_colright_height(table, height);
	return (row_up_check && row_down_check
		&& col_left_check && col_right_check);
}
