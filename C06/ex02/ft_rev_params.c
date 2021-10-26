/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:51:37 by daykim            #+#    #+#             */
/*   Updated: 2021/10/25 00:58:07 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		while (--argc)
		{
			i = 0;
			while (argv[argc][i])
			{
				write(1, &argv[argc][i], 1);
				i++;
			}
			write(1, "\n", 1);
		}
	}
	return (0);
}
