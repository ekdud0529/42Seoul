/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:40:39 by daykim            #+#    #+#             */
/*   Updated: 2021/10/19 11:43:43 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (*src && nb--)
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
