/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:57:50 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/01 23:13:13 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	tmp = malloc(sizeof(void *) * ft_strlen(src) + 1);
	tmp = ft_memcpy(tmp, src, n);
	dest = ft_memcpy(dest, tmp, n);
	return (dest);
}
