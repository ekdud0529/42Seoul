/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:17:12 by daykim            #+#    #+#             */
/*   Updated: 2021/10/24 17:37:25 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		check = base + 1;
		if (*base == '+' || *base == '-')
			return (0);
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

int	get_power(int	num, int	power)
{
	int	n;

	n = 1;
	while (power--)
		n *= num;
	return (n);
}

int	check_num(int len, char *base, char num)
{
	while (len)
	{
		if (num == base[len])
			break;
		len--;
	}
	return (len);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int			power;
	long long	n;

	power = get_base_len(base);
	if (check_char(base) && power > 1)
	{
		
	}
	return ((int)n);
}
