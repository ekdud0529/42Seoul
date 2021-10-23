/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:48:31 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 15:31:03 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	ind;
	char	*str;

	ind = 1;
	while (ind < argc)
	{
		str = argv[ind];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		ind++;
	}
	return 0;
}
