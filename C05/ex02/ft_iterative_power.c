/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:47:48 by daykim            #+#    #+#             */
/*   Updated: 2021/10/21 13:01:10 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	num;

	num = 1;
	if (power < 0 || nb < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power--)
	{
		num *= nb;
	}
	return (num);
}
