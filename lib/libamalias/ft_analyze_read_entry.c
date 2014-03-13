/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyze_read_entry.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 19:51:59 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/13 19:55:34 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_analyze_read_entry(t_center_ai *center)
{
	if (center)
	{
		ft_putstr_yellow("Amalias is processing to analyze your entry :\t");
        ft_putstr_blue(center->temporary_read_main_entry);
		ft_putstr("\n");
		if (ft_strcmp(center->temporary_read_main_entry, "exit\n") == 0)
			center->error = "EXITISOK";
		else if (ft_strcmp(center->temporary_read_main_entry, "help\n") == 0)
			ft_print_help();
	}
}

void	ft_print_help(void)
{
	ft_putstr_green("Help :\n");
	ft_putstr_blue("Possible commands are for now Exit and Help\n");
	ft_putstr_blue("Ok there is not a lot of things, i started yesterday\n");
}
