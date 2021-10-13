/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:09:20 by daykim            #+#    #+#             */
/*   Updated: 2021/10/11 17:09:22 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	split()
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	char	number[3];
	char	comma;
	char	space;

	number[0] = '0';
	comma = ',';
	space = ' ';
	while (number[0] <= '9')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '9')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, &number, 3);
				number[2]++;
				if (number[0] == '7')
					break ;
				split();
			}
			number[1]++;
		}
		number[0]++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}

