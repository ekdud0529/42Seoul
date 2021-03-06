/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:57:21 by daykim            #+#    #+#             */
/*   Updated: 2021/10/27 14:02:46 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVENP(nbr) (nbr % 2 == 0)? (1) : (0);

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG " I have an odd number of arguments.\n"

# define SUCCESS 0

typedef enum s_bool
{
	FALSE,
	TRUE
}	t_bool;

#endif
