/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:32:42 by daykim            #+#    #+#             */
/*   Updated: 2021/10/12 14:01:48 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	num;
	int	cnt;

	cnt = size / 2;
	size--;
	while (cnt)
	{
		num = *tab;
		*tab = *(tab + size);
		*(tab + size) = num;
		cnt--;
		size -= 2;
		tab = tab + 1;
	}
}
