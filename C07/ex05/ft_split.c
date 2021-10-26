/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:48:09 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 23:01:24 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ch_charset(char c, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		word_cnt;
	int		idx;
	int		i;
	int		len;

	word_cnt = 0;
	cnt_word(str, charset, &word_cnt);
	arr = (char **) malloc (sizeof(char *) * (word_cnt + 1));
	i = 0;
	idx = 0;
	while (str[i])
	{
		while (ch_charset(str[i], charset))
			i++;
		len = i;
		while (!ch_charset(str[i], charset))
			i++;
		if (len > i)
		{
			arr[idx] = mk_str(len, i, str);
			idx++;
		}
	}
	return (arr);
}

void	mk_str(int	start, int end, char *str)
{
	char	*arr;
	int		i;

	i = 0;
	arr = (char *) malloc (sizeof(char) * (end - start +1));
	while (start < end)
	{
		arr[i] = str[start];
		start++;
		i++;
	}
	return (arr);
}

void	cnt_word(char *str, char *charset, int *cnt)
{
	while (str[i])
	{
		while (ch_charset(str[i], sharset))
			i++;
		while (!ch_charset(str[i], charset))
			i++;
		*cnt++;
	}
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
