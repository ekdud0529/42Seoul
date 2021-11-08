/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:45:31 by daykim            #+#    #+#             */
/*   Updated: 2021/10/23 13:47:57 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc > 0)
	{
		str = argv[0];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
	return (0);
}
