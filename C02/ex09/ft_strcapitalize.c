/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:52:34 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 10:33:43 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	char	*cmp;
	char	*src;

	src = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
		{
			cmp = str - 1;
			if (!('a' <= *cmp && *cmp <= 'z') && !('A' <= *cmp && *cmp <= 'Z')
				&& !('0' <= *cmp && *cmp <= '9'))
				*str = *str - 32;
		}
		if ('A' <= *str && *str <= 'Z')
		{
			cmp = str - 1;
			if (('a' <= *cmp && *cmp <= 'z') || ('A' <= *cmp && *cmp <= 'Z')
				|| ('0' <= *cmp && *cmp <= '9'))
				*str = *str + 32;
		}
		str++;
	}
	return (src);
}
