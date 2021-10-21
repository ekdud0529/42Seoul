/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:43:54 by daykim            #+#    #+#             */
/*   Updated: 2021/10/21 15:24:30 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int	nb)
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

int	ft_find_next_prime(int	nb)
{
	int	ch_prime;

	while (nb <= 2147483647)
	{
		ch_prime = check_prime(nb);
		if (ch_prime)
			break ;
		nb++;
	}
	return (nb);
}
