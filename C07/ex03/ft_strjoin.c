/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:27:04 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 13:59:25 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int	get_len(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*str;
	int		i;

	i = -1;
	len = 0;
	len += get_len(sep) * (size - 1);
	while (++i < size)
		len += get_len(strs[i]);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (size == 0)
	{
		str[0] = '\0';
		return (str);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i++]);
		ft_strcat(str, sep);
	}
	str[i] = '\0';
}

int	 get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char	*dest, char	*src)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (*src)
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
