/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:38:23 by daykim            #+#    #+#             */
/*   Updated: 2021/10/21 15:16:27 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	long long	sqrt;

	sqrt = 2;
	if (nb <= 1)
		return (0);
	while (sqrt * sqrt <= nb)
	{
		if (nb % sqrt == 0 && sqrt != nb)
			return (0);
		sqrt++;
	}
	return (1);
}
