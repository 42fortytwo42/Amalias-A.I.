/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_regenerate_memory.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:37:33 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 00:40:33 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_regenerate_memory(t_center_ai *center)
{
	if (center)
	{
		ft_putstr_green("\tAMALIAS MEMORY REGENERATION\n\n");
		ft_putstr_yellow("Opening Memory :\t\t");
		ft_open_memory_log(center);
		ft_putstr("\n");
		ft_putstr_yellow("Define Memory First Step : \t\t");
		ft_who_am_i(center);
		ft_putstr("\n");
		ft_putstr_yellow("Define Memory Second Step : \t\t");
		ft_where_am_i(center);
		ft_putstr("\n");
		ft_putstr_yellow("Define Memory Third Step : \t\t");
		ft_what_i_do(center);
		ft_putstr("\n");
		ft_putstr_yellow("Define Memory Fourth Step : \t\t");
		ft_when_i_do(center);
		ft_putstr("\n");
	}
}
