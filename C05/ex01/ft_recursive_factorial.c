/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:41:26 by daykim            #+#    #+#             */
/*   Updated: 2021/10/21 12:46:21 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int	nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
