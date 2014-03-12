/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 01:47:40 by tle-mign          #+#    #+#             */
/*   Updated: 2013/11/30 17:56:56 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*test;

	test = NULL;
	while (*s)
	{
		if (*s == (char)c)
			test = (char*)s;
		s++;
	}
	if ((char)c == '\0')
		test = (char*)s;
	return (test);
}
