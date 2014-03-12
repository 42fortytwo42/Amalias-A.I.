/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 16:08:31 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/19 11:15:44 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int		ft_strsplit_cmp(char const *string, char c)
{
	int		index;

	index = 0;
	while (string[index] == c)
		index++;
	if (string[index] == '\0')
		return (1);
	return (0);
}

static int		ft_w_count(char const *string, char c)
{
	size_t		count_words;
	size_t		index;

	count_words = 0;
	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] != c && string[index] != '\0')
		{
			count_words++;
			while (string[index] != c)
				index++;
		}
		index++;
	}
	return (count_words);
}

static size_t	ft_len(const char *string, char c, int index)
{
	size_t	length;

	length = 0;
	while (string[index] != '\0' && string[index] != c)
	{
		index++;
		length++;
	}
	return (length);
}

static int		ft_str_cpy(char const *string, char **str, int v, char c)
{
	size_t		i;
	size_t		h;
	size_t		word;

	i = (word = 0) + (h = 0);
	while (string[i] == c && string[i] != '\0')
		i++;
	while (string[i] != c && string[i] != '\0')
	{
		if (word == 0)
			str[v] = (char *) malloc((ft_len(string, c, i) + 1) * sizeof(char));
		word = 1;
		str[v][h] = string[i];
		str[v][h + 1] = '\0';
		i++;
		h++;
	}
	if (str[v] && word == 1)
	{
		word = 0;
		v++;
		str[v] = NULL;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**string;
	int		index;
	int		v;
	int		length;

	index = 0;
	v = 0;
	if (!s)
		return (NULL);
	string = (char **) malloc((ft_w_count(s, c) + 1) * sizeof(char *));
	if (s[0] == 0 || ft_strsplit_cmp(s, c) == 1)
	{
		*string = NULL;
		return (string);
	}
	while (s[index] != '\0')
	{
		length = ft_str_cpy(s + index, string, v, c);
		index += length;
		v++;
	}
	return (string);
}
