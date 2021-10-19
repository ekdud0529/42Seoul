/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:44:03 by daykim            #+#    #+#             */
/*   Updated: 2021/10/19 13:23:51 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	char	*seek;
	char	*src;

	seek = to_find;
	while (*str)
	{
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
			if (!(*seek))
				return (str);
		}
		str++;
		seek = to_find;
	}
	return (0);
}
