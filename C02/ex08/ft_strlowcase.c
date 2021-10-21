/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:45:10 by daykim            #+#    #+#             */
/*   Updated: 2021/10/12 16:47:17 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	while (*str)
	{
		if (65 <= *str || *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (str);
}