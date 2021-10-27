/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:02:21 by daykim            #+#    #+#             */
/*   Updated: 2021/10/27 15:23:09 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern int	ft_atoi_base(char *str, char *base);
extern int	check_valid(char *base);
int			get_len(char *str);
char		*mk_arr(char *arr, int size, int sign);
int			ch_base(char *base_from, char *base_to);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			idx;
	long long	num;
	char		arr[33];
	int			base_to_len;
	int			sign;

	sign = 1;
	base_to_len = get_len(base_to);
	if (!ch_base(base_from, base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	idx = 0;
	if (num == 0)
		arr[idx++] = base_to[num];
	if (num < 0)
	{
		sign = -1;
		num *= -1;
	}
	while (num)
	{
		arr[idx++] = base_to[num % base_to_len];
		num /= base_to_len;
	}
	return (mk_arr(arr, idx, sign));
}

int	ch_base(char *base_from, char *base_to)
{
	if (!get_len(base_to) || !get_len(base_from)
		|| !check_valid(base_from) || !check_valid(base_to))
		return (0);
	return (1);
}

char	*mk_arr(char *arr, int size, int sign)
{
	int		idx;
	char	*arry;

	idx = 0;
	arry = (char *)malloc(sizeof(char) * (size + 1));
	if (sign == -1)
		arry[idx++] = '-';
	while (size--)
	{
		arry[idx++] = arr[size];
	}
	arry[idx] = '\0';
	return (arry);
}

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
