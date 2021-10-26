/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:48:09 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 23:13:44 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ch_charset(char c, char *charset);
char	*mk_str(int start, int end, char *str);
int	cnt_word(char *str, char *charset);
int		ch_charset(char c, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		word_cnt;
	int		idx;
	int		i;
	int		len;

	word_cnt = cnt_word(str, charset);
	printf("%d\n", word_cnt);
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
	arr[idx] = 0;
	return (arr);
}

char	*mk_str(int	start, int end, char *str)
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
	arr[i] = '\0';
	return (arr);
}

int	cnt_word(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (ch_charset(str[i], charset))
			i++;
		while (!ch_charset(str[i], charset))
			i++;
		cnt++;
	}
	return (cnt);
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
