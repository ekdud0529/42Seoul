/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:10:15 by daykim            #+#    #+#             */
/*   Updated: 2021/10/11 20:45:45 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_number[9];
void	front_putc(int repetition, char	start)
{
	char	comma;
	char	space;
	int		cnt;

	cnt = 0;
	comma = ',';
	space = ' ';
	while(repetition--)
		write(1, &g_number[cnt++], 1);
	write(1, &start, 1);
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	 recursion(int	n, int	position, int start, int	index)
{
	if(position == 1)
	{
		while(start < 10)
		{
			g_number[start] = start+'0';
			front_putc(n-1, start+'0');
			start++;
		}
	}
	else
	{
		while(start < 10)
		{
			g_number[index] = start + '0';
			recursion(n, position-1, start+1, index+1);
			start++;
		}
	}
}


void	ft_print_combn(int	n)
{
	recursion(n, n, 0, 0);
}

int main(){
	char s='\n';
	ft_print_combn(2);
	write(1, &s, 1);
	ft_print_combn(9);
	write(1, &s, 1);
	ft_print_combn(5);
	return 0;
}
