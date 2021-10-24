/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:59:06 by daykim            #+#    #+#             */
/*   Updated: 2021/10/25 01:30:22 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *origin, char *dest)
{
	while (*origin && *dest)
	{
		if (*origin != *dest)
			return (*origin - *dest);
		origin++;
		dest++;
	}
	return (*origin - *dest);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = i;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
				j++;
			}
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
