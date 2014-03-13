/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_main_entry.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 19:50:49 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/13 19:46:23 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_read_main_entry(t_center_ai *center)
{
	char		*buffer;
	int			fd;

	fd = 0;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_READ_MAIN_ENTRY + 1));
	if (center && buffer)
	{
		read(fd, buffer, BUFFER_READ_MAIN_ENTRY);
		buffer[BUFFER_READ_MAIN_ENTRY + 1] = '\0';
		center->temporary_read_main_entry = buffer;
	}
}
