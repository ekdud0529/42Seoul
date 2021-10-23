/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:17:12 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 14:54:36 by daykim           ###   ########.fr       */
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

int	ft_atoi(char	*str)
{
	int			sign;
	long long	num;

	num = 0;
	sign = 1;
	while (*str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	num *= sign;
	return ((int)num);
}

int	get_power(int	num, int	power)
{
	int	n;

	n = 1;
	while (power--)
		n *= num;
	return (n);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int			len;
	int			sign;
	int			power;
	long long	num;
	long long	n;

	n = 0;
	num = ft_atoi(str);
	len = get_base_len(base);
	sign = 1;
	power = 0;
	if (num < 0)
	{
		sign = -1;
		num *= -1;
	}
	while (num)
	{
		n += (num % 10) * get_power(len, power);
		num /= 10;
		power++;
	}
	n *= sign;
	return ((int)n);
}
