/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:48:09 by daykim            #+#    #+#             */
/*   Updated: 2021/10/26 22:00:33 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*strr;
	int		word_cnt;
	int		idx;

	arr = (char **)malloc(sizeof(char *) * );
