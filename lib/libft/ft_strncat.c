/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:59:56 by tle-mign          #+#    #+#             */
/*   Updated: 2013/11/30 17:53:39 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*tmp_dest;

	tmp_dest = dest;
	while (*tmp_dest)
		tmp_dest++;
	while (n-- && *src != '\0')
		*tmp_dest++ = *src++;
	*tmp_dest = '\0';
	return (dest);
}
