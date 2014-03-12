/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 20:12:20 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/01 23:19:42 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		u;
	size_t		length;

	tmp_dst = dst;
	tmp_src = src;
	u = size;
	while (u-- != 0 && *tmp_dst != '\0')
		tmp_dst++;
	length = tmp_dst - dst;
	u = size - length;
	if (u == 0)
		return (length + ft_strlen(tmp_src));
	while (*tmp_src != '\0')
	{
		if (u != 1)
		{
			*(tmp_dst++) = *tmp_src;
			u--;
		}
		tmp_src++;
	}
	*tmp_dst = '\0';
	return (length + (tmp_src - src));
}
