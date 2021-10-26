/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:08:41 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 22:46:59 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	get_power(int base, int power)
{
	long long	pow;

	pow = 1;
	while (power--)
	{
		pow *= base;
	}
	return (pow);
}

int	check_valid(char *base)
{
	char	*check;

	while (*base)
	{
		check = base + 1;
		if (*base == '+' || *base == '-' || *base == ' '
			|| (9 <= *base && *base <= 13))
			return (0);
		while (*check)
		{
			if (*base == *check)
				return (0);
			check++;
		}
		base++;
	}
	return (1);
}

int	check_num(char str, char *base)
{
	while (*base)
	{
		if (str == *base)
			return (1);
		base++;
	}
	return (0);
}

long long	mk_num(int base_len, char *str, char *base)
{
	long long	num;
	int			index;
	int			str_len;

	str_len = 0;
	while (str[str_len] && check_num(str[str_len], base))
		str_len++;
	num = 0;
	while (*str)
	{
		index = 0;
		if (!check_num(*str, base))
			return (num);
		while (base[index])
		{
			if (base[index] == *str)
			{
				num += (index * get_power(base_len, --str_len));
				break ;
			}
			index++;
		}
		str++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int			base_len;
	int			sign;
	long long	num;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2 || !check_valid(base) || str[0] == '\0')
		return (0);
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	num = mk_num(base_len, str, base);
	num *= sign;
	return ((int)num);
}
