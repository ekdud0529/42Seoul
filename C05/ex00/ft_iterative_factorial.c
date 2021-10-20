/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:38:14 by daykim            #+#    #+#             */
/*   Updated: 2021/10/20 12:44:38 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	num;

	if (nb || nb <= 0 || nb > 2147483647)
		return (0);
	num = 1;
	while (nb)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
