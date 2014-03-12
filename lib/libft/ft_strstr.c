/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 20:51:49 by tle-mign          #+#    #+#             */
/*   Updated: 2013/11/30 17:58:27 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str, const char *target)
{
	size_t	len;

	if (!target)
		return ((char*)str);
	if (!str)
		return (NULL);
	len = ft_strlen(target);
	if (len == 0)
		return ((char*)str);
	while (*str != '\0')
	{
		if (*str == *target && ft_strncmp(str, target, len) == 0)
			return ((char*)str);
		str++;
	}
	return (NULL);
}
