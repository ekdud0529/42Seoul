/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:02:04 by daykim            #+#    #+#             */
/*   Updated: 2021/10/18 15:42:57 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	while (*str)
	{
		if (('a' > *str || *str > 'z') && ('A' > *str || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}
