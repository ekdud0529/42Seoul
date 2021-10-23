/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:51:00 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 14:08:34 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		if (*str != ' ' && *str != '+' && *str != '-'
			&& ('0' > *str || '9' < *str))
			break ;
		if ('0' <= *str && *str <= '9')
			num = num * 10 + (*str - '0');
		str++;
	}
	num *= sign;
	return (num);
}

int	check_char(char *base)
{
	char	*check;

	while (*base)
	{
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

int	ft_putnbr_base(int	num, char *base, char	*change)
{
	int	base_len;
	int	ind;
	int	sign;

	ind = 0;
	sign = 1;
	base_len = get_base_len(base);
	if (base_len > 1 && check_char(base))
	{
		if (num < 0)
		{
			change[ind++] = base[(num % base_len)*(-1)];
			num = (num / base_len) * -1;
			sign *= -1;
		}
		while (num)
		{
			change[ind++] = base[num % base_len];
			num /= base_len;
		}
	}
	return (ind * sign);
}

int	ft_atoi_base(char	*str, char	*base)
{
	char	change[11];
	int		num;
	int		ind;
	int		sign;

	sign = 1;
	num = ft_atoi(str);
	if (num != 0 && check_char(base))
	{
		ind = ft_putnbr_base(num, base, change);
		num = 0;
		if (ind < 0)
		{
			ind *= -1;
			sign = -1;
		}
		while (ind--)
		{
			num = num * 10 + (change[ind] - '0');
		}
		num *= sign;
	}
	return (num);
}
