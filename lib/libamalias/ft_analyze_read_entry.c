/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyze_read_entry.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 19:51:59 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/14 20:05:36 by tle-mign         ###   ########.fr       */
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
		else if (ft_strcmp(center->temporary_read_main_entry, "amalias\n") == 0)
			ft_putstr_purple("Don't Panic I am here.\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "locate\n") == 0)
			ft_putstr_purple("We are for now unable to locate us, i am sorry.\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "time\n") == 0)
			ft_putstr_purple("I am not able to communicate this information for now.\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "syntax\n") == 0)
			ft_putstr_purple("You are enjoying first level of syntax analysis.\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "sos\n") == 0)
			ft_putstr_purple("Don't Panic and call the autorities, i cannot call anyone for now.\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "lock\n") == 0)
			ft_putstr_purple("Don't Panic, security is not enough structured at this time.\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "unlock\n") == 0)
			ft_putstr_purple("Don't Panic, security is not enough structured at this time.\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "memory\n") == 0)
			ft_putstr_purple("Please don't try !\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "\n") == 0)
			ft_putstr_purple("Please write something that i could understand !\n");
		else
		{
			ft_putstr_purple("I cannot find what you mean with : ");
			ft_putstr_blue(center->temporary_read_main_entry);
			ft_putstr_purple("\n");
		}
	}
}

void	ft_print_help(void)
{
	ft_putstr_green("Help :\n");
	ft_putstr_blue("Possible commands are for now Exit and Help\n");
	ft_putstr_blue("Ok there is not a lot of things, i started yesterday\n");
}
