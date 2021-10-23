/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:44:03 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 12:58:06 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	char	*seek;
	char	*src;

	if (!(*to_find))
		return (str);
	while (*str)
	{
		seek = to_find;
		if (*str == *seek)
		{
			src = str;
			while (*seek && *src)
			{
				if (*src != *seek)
					break ;
				seek++;
				src++;
			}
			if (*seek == '\0')
				return (str);
		}
		str++;
	}
	*seek = '\0';
	return (seek);
}
