/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 01:50:30 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/01 19:37:19 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	reference;
	char			*ucs1;
	char			*ucs2;

	ucs1 = (char *)s1;
	ucs2 = (char *)s2;
	reference = (unsigned char)c;
	while (n--)
	{
		if ((*(ucs1++) = *(ucs2++)) == reference)
			return (ucs1);
	}
	return (0);
}
