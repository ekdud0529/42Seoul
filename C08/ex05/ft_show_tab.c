/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:37:06 by daykim            #+#    #+#             */
/*   Updated: 2021/10/27 14:01:26 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_num(int size);

void	ft_show_tab(struct	s_stock_str	*par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i])
	{
		j = 0;
		while (par[i].str[j])
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		put_num(par[i].size);
		j = 0;
		while (par[i].copy[j])
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	put_num(int size)
{
	int	arr[10];
	int	i;

	i = 0;
	while (size)
	{
		arr[i++] = size % 10;
		size /= 10;
	}
	while (--i >= 0)
	{
		write(1, &arr[i], 1);
	}
	write(1, "\n", 1);
}
