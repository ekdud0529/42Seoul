/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:32:42 by daykim            #+#    #+#             */
/*   Updated: 2021/10/12 13:53:22 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int	*tab, int	size)
{
	int	num;
	int cnt;

	cnt = size/2;
	size--;
	while (cnt)
	{
		num = *tab;
		*tab = *(tab - size);
		*(tab - size) = num;
		cnt--;
		size--;
	}
}

int main(){
	int tab[10] = { 1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(&tab[0], 7);
	int i=0;
	for(i=0; i<7; i++) printf("%d ", tab[i]);
	return 0;
}
