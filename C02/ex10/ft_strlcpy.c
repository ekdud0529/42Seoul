/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:51:36 by daykim            #+#    #+#             */
/*   Updated: 2021/10/14 15:02:56 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	char	*origin;
	int		cnt;

	cnt = 0;
	origin = src;
	while (*src)
	{
		cnt++;
		src++;
	}
	while (size--)
	{
		*dest = *origin;
		origin++;
		dest++;
	}
	*dest = '\0';
	return (cnt);
}
