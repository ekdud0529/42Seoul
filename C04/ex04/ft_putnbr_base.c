/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:50:54 by daykim            #+#    #+#             */
/*   Updated: 2021/10/24 17:07:50 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	get_base_len(char *base)
{
	int	len;

	len = 0;
	while (*base)
	{
		len++;
		base++;
	}
	return (len);
}

int	check_char(char *base)
{
	char	*check;

	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		check = base + 1;
		while (*check)
		{
			if (*base == *check || *base == '+' || *base == '-')
				return (0);
			check++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	char		change[20];
	int			base_len;
	int			ind;
	long long	num;

	ind = 0;
	num = nbr;
	base_len = get_base_len(base);
	if (base_len > 1 && check_char(base))
	{
		if (num < 0)
			num *= -1;
		if (num == 0)
			change[ind++] = base[num];
		while (num)
		{
			change[ind++] = base[num % base_len];
			num /= base_len;
		}
		if (nbr < 0)
			change[ind++] = '-';
		while (ind--)
			write(1, &change[ind], 1);
	}
}
