/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:49:51 by daykim            #+#    #+#             */
/*   Updated: 2021/10/24 22:18:09 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	get_power(int base, int power)
{
	int	get_power;

	get_power = 1;
	while (power--)
	{
		get_power *= base;
	}
	return (get_power);
}

int	check_base(char *base)
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

long long	mk_num(int base_len, char *str, char *base)
{
	long long	num;
	int			index;
	int			power;
	int			str_len;

	str_len = 0;
	while (str[str_len])
		str_len++;
	num = 0;
	while (*str)
	{
		index = 0;
		while (base[index])
		{
			if (base[index] == str[str_len-1])
			{
				power = get_power(base_len, index);
				num += index*power;
				break;
			}
			index++;
		}
		str_len--;
		str++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int		base_len;
	int		sign;
	long long num;

	base_len = get_len(base);
	if (base_len < 2 && check_base(base) && str[0] == '\0')
			return (0);
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = mk_num(base_len, str, base);
	num *= sign;
	return ((int)num);
}
