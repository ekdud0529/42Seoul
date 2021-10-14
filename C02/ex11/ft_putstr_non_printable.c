/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:08:32 by daykim            #+#    #+#             */
/*   Updated: 2021/10/14 16:45:56 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr_non_printable(char	*str)
{
	char	hex;

	hex = 0;
	while (*str)
	{
		if ((0 <= *str && *str < 32) || *str == 127)
		{
			write(1, "\\", 1);
			hex = *str / 16 + '0';
			write(1, &hex, 1);
			if (*str % 16 > 9)
				hex = (((*str % 16) - 10) + 'a');
			else
				hex = *str % 16 + '0';
			write(1, &hex, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
