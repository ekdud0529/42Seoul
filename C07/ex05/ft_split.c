/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:48:09 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 22:46:47 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ch_charset(char c, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*strr;
	int		word_cnt;
	int		idx;
	int		i;

	word_cnt = 0;
	while (str[i])
	{
		while (ch_charset(str[i], charset))
			i++;
		while (!ch_charset(str[i], charset))
			i++;
		word_cnt++;
	}
	arr = (char **) malloc (sizeof(char *) * word_cnt);

}

int	ch_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c  == *charset)
			return (1);
		charset++;
	}
	return (0);
}
