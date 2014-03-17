/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 19:09:46 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 08:07:46 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd(char const *s, int fd)
{
	int		i;
	int		to_return;
	i = (to_return = 0);
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
		to_return++;
	}
	return (to_return);
}
