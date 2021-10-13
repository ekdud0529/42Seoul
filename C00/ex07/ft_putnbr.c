/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:41:09 by daykim            #+#    #+#             */
/*   Updated: 2021/10/13 19:17:42 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int	nb)
{
	char	number[11];
	int		cnt;
	int		num;

	cnt = 0;
	num = nb;
	if (nb == 0)
		number[cnt++] = '0';
	if (nb < 0)
	{
		number[cnt++] = (nb % 10) * (-1) + '0';
		nb /= 10;
		nb *= -1;
	}
	while (nb != 0)
	{
		number[cnt++] = nb % 10 + '0';
		nb /= 10;
	}
	if (num < 0)
		number[cnt++] = '-';
	while (cnt--)
		write(1, &number[cnt], 1);
}
