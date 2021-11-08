/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:46:21 by daykim            #+#    #+#             */
/*   Updated: 2021/10/12 16:17:14 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*cpy;

	cpy = dest;
	while (*src && n--)
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';
	return (dest);
}
