/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 01:36:09 by tle-mign          #+#    #+#             */
/*   Updated: 2013/11/30 17:56:26 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (!*s2)
		return ((char*)s1);
	len = ft_strlen(s2);
	while (*s1 != '\0' && n >= len)
	{
		if (ft_memcmp(s1, s2, len) == 0)
			return ((char*)s1);
		s1++;
		n--;
	}
	return (NULL);
}
