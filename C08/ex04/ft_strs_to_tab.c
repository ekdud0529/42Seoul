/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:20:25 by daykim            #+#    #+#             */
/*   Updated: 2021/10/27 13:58:07 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*str_dup(char *str)
{
	int		i;
	char	*arr;

	i = 0;
	while (str[i])
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	while (i < ac)
	{
		arr[i].size = str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = str_dup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
