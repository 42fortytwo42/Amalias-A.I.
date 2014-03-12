/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 13:07:18 by tle-mign          #+#    #+#             */
/*   Updated: 2013/11/30 17:56:04 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*ret;

	ret = (char*)malloc(sizeof(char) * size + 1);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size + 1);
	return (ret);
}
