/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 16:29:33 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/13 01:43:49 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_str_nbr(int nbr, char *dst)
{
	if (nbr >= 0)
	{
		if (nbr >= 10)
		{
			ft_str_nbr(nbr / 10, dst);
			ft_str_nbr(nbr % 10, dst);
		}
		else
			dst[ft_strlen(dst)] = nbr + '0';
	}
	else
	{
		dst[0] = '-';
		ft_str_nbr(-nbr, dst);
	}
}

char			*ft_itoa(int nbr)
{
	char	*dst;

	dst = (char *) malloc(sizeof(char) * 13);
	if (!dst)
		return (NULL);
	ft_bzero(dst, 13);
	if (nbr == -2147483648)
	{
		ft_str_nbr(nbr + 1, dst);
		dst[10] = '8';
	}
	else
		ft_str_nbr(nbr, dst);
	return (dst);
}
