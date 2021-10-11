/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:31:47 by daykim            #+#    #+#             */
/*   Updated: 2021/10/11 14:54:17 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];
	char	comma;

	number[0] = '0';
	comma = ',';
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
				if (number[0] != '7')
					write(1, &comma, 1);
			}
			number[1]++;
		}
		number[0]++;
	}
}
