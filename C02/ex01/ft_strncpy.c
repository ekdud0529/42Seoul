/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:46:21 by daykim            #+#    #+#             */
/*   Updated: 2021/10/12 15:49:41 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*cpy;

	cpy = dest;
	while(n--)
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';

	return dest;
}

int main(){
	char dest[10];
	char src[10] = "home!!";

	ft_strncpy(&dest[0], &src[0], 5);

	int i;
	for(i=0; i<10; i++)
		printf("%c", dest[i]);

	return 0;
}
