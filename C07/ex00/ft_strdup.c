/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:05:28 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 12:13:05 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		str_len;
	int		i;

	str_len = 0;
	i = 0;
	while (src[str_len])
		str_len++;
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	while (i < str_len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
