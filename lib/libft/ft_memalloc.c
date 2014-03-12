/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 17:26:46 by tle-mign          #+#    #+#             */
/*   Updated: 2013/11/30 19:42:46 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*ret;

	ret = (void *)malloc(sizeof(void) * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
