/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:32:59 by daykim            #+#    #+#             */
/*   Updated: 2021/11/18 17:32:59 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *ptr, int value, size_t num)
{
    int index;

    index = 0;
    while (index < num)
    {
        *((unsigned char *)ptr+index) = (unsigned char)value;
        index++;
    }
    return (ptr);
}