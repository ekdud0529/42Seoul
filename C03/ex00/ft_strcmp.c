/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:34:03 by daykim            #+#    #+#             */
/*   Updated: 2021/10/16 14:40:46 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	result;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
			{
				result = 1;
				break;
			}
			else
			{
				result = -1;
				break;
			}
		}
	}
	if (!(*s1) && !(*s2))
		result = 0;
	else if (!(*s1))
		result = 1;
	else
		result = -1;
	return (result);
}
		
