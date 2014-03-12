/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 01:27:45 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/12 22:44:19 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strncmp_mk_results(char s1, char s2)
{
	if (s1 > s2)
		return (1);
	else if (s1 < s2)
		return (-1);
	else
		return (0);
}

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	if (n == 1 && *s1 == *s2)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' &&
		s1[i] == s2[i])
	{
		if (i + 1 == n)
			return (ft_strncmp_mk_results(s1[i], s2[i]));
		i += 1;
	}
	return (ft_strncmp_mk_results(s1[i], s2[i]));
}
