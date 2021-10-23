/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:08:32 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 10:46:00 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr_non_printable(char	*str)
{
	unsigned char	charhex;
	unsigned char	*strr;

	hex = 0;
	strr = (unsigned char *)str;
	while (*strr)
	{
		if (*strr < 32 || *strr > 126)
		{
			write(1, "\\", 1);
			hex = *strr / 16 + '0';
			write(1, &hex, 1);
			if (*strr % 16 > 9)
				hex = (((*strr % 16) - 10) + 'a');
			else
				hex = *strr % 16 + '0';
			write(1, &hex, 1);
		}
		else
			write(1, strr, 1);
		strr++;
	}	
}
