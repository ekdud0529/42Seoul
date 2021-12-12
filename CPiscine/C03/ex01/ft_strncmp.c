/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:36:07 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 12:21:22 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (n != 0)
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}