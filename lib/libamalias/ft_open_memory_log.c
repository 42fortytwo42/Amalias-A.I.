/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_memory_log.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:18:56 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 08:18:21 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

int		ft_open_memory_log(t_center_ai *center)
{
	int		fd;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * BUFFER_READ_MEMORY);
	if (center)
	{
		fd = open("log/memory/memory.amalias", O_RDONLY);
		if (fd == -1)
			return (0);
		if (read(fd, buffer, BUFFER_READ_MEMORY) != -1)
		{
			center->temporary_read_memory = buffer;
			close(fd);
			return (1);
		}
	}
	return (0);
}
