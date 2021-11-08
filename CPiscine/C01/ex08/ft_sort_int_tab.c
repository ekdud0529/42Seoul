/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:15:22 by daykim            #+#    #+#             */
/*   Updated: 2021/10/12 14:33:55 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	*ind;
	int	num;
	int	cnt;

	while (size--)
	{
		cnt = size;
		ind = tab + 1;
		while (cnt--)
		{
			if (*tab > *ind)
			{
				num = *tab;
				*tab = *ind;
				*ind = num;
			}
			ind++;
		}
		tab++;
	}
}
