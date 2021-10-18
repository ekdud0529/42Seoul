/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:57:59 by daykim            #+#    #+#             */
/*   Updated: 2021/10/17 18:14:14 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* extern */
void	input_table_init(char	*ch_array, int	int_array[], int	table[]);
void	ft_print_table(int	cur_tb[][4]);
void	ft_mktable_24_init(int	N, int *table, int	tb_24[][4]);
int		rec_tb(int	cur_tb[][4], int	tb_24[][4], int	input[], int	d);

int	main(int	argc, char	*argv[])
{
	int	table[4];
	int	tb_24[24][4];
	int	cur_tb[4][4];
	int	input[16];
	int	depth;

	if (argc == 2)
	{
		input_table_init(argv[1], input, table);
		ft_mktable_24_init(0, table, tb_24);
		depth = rec_tb(cur_tb, tb_24, input, 0);
		if (depth == -1)
			ft_print_table(cur_tb);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
