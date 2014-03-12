/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:15:36 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/01 23:16:21 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *primary, const char *secondary)
{
	int		i;

	i = 0;
	while (primary[i] != '\0')
		i++;
	while (*secondary != '\0')
		primary[i++] = *(secondary++);
	primary[i] = '\0';
	return (primary);
}
