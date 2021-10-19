/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:24:42 by daykim            #+#    #+#             */
/*   Updated: 2021/10/19 14:04:49 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_len(char	*str)
{
	unsigned int	cnt;
	char			*str_len;

	cnt = 0;
	str_len = str;
	while (*str_len)
	{
		cnt++;
		str_len++;
	}
	return (cnt);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = get_len(dest);
	src_len = get_len(src);
	printf("%d %d\n", dest_len, src_len);
	while (*dest)
		dest++;
	if (size <= dest_len)
		return (size + src_len);
	size -= dest_len + 1;
	while (size--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (src_len + dest_len);
}
