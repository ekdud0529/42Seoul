/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:13:53 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 12:26:08 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * (size));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
