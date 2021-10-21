/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:05:11 by daykim            #+#    #+#             */
/*   Updated: 2021/10/21 13:09:59 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (nb < 0 || power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
