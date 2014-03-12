/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 16:03:34 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/13 01:45:26 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		length;
	int		h;
	char	*string;

	i = (h = 0);
	if (!s)
		return (NULL);
	string = (char *) ft_memalloc(ft_strlen((char*)s));
	if (!string)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		h += 1 + 0 * (i += 1);
	string = ft_strcpy(string, s + i);
	length = ft_strlen(string);
	i = 1;
	while (string[length - i] == ' ' || string[length - i] == '\n'\
		|| string[length - i] == '\t')
	{
		string[length - i] = '\0';
		h += 1 + 0 * (i += 1);
	}
	if (h != 0)
		return (string);
	return (string);
}
