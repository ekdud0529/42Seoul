/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:09:41 by daykim            #+#    #+#             */
/*   Updated: 2021/10/11 17:09:44 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	num[], int check)
{
	char	space;
	char	comma;

	space = ' ';
	comma = ',';
	write(1, &num[0], 1);
	write(1, &num[1], 1);
	write(1, &space, 1);
	write(1, &num[2], 1);
	write(1, &num[3], 1);
	if (check != 98)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	char	number[4];
	int		number1;
	int		number2;

	number1 = 0;
	while (number1 < 100)
	{
		number2 = number1 + 1;
		while (number2 < 100)
		{
			number[0] = number1 / 10 + '0';
			number[1] = number1 % 10 + '0';
			number[2] = number2 / 10 + '0';
			number[3] = number2 % 10 + '0';
			ft_putchar(number, number1);
			number2++;
		}
		number1++;
	}
}
