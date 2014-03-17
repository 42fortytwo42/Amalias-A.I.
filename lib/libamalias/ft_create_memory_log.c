/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_memory_log.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:21:20 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 08:10:04 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

int		ft_create_memory_log(t_center_ai *center)
{
	int		fp;

	if (center)
	{
		fp = open("log/memory/memory.amalias", O_CREAT|O_RDWR, 0666);
		if (fp == 0)
			return (0);
		if ((int)ft_strlen("Amalias Memory File .amalias")
			== ft_putstr_fd("Amalias Memory File .amalias", fp))
		{
			close(fp);
			return (1);
		}
		close(fp);
	}
	return (0);
}
