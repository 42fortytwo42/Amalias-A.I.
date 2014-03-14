/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:24:06 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/14 19:27:02 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_generate_memory(t_center_ai *center)
{
	if (center)
	{
		ft_create_memory_log(center);
		ft_generate_who_am_i(center);
		ft_generate_where_am_i(center);
		ft_generate_what_i_do(center);
		ft_generate_when_i_do(center);
	}
}

void	ft_generate_who_am_i(t_center_ai *center)
{
	if (center)
	{

	}
}

void	ft_generate_where_am_i(t_center_ai *center)
{
	if (center)
	{

	}
}

void	ft_generate_what_i_do(t_center_ai *center)
{
	if (center)
	{

	}
}

void	ft_generate_when_i_do(t_center_ai *center)
{
	if (center)
	{

	}
}
