/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyze_read_entry.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 19:51:59 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 07:06:12 by tle-mign         ###   ########.fr       */
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
		else if (ft_strcmp(center->temporary_read_main_entry, "mission\n") == 0)
			ft_putstr_purple("Memory Unavailable -> Please give me my brain\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "ls\n") == 0)
			ft_putstr_purple("Please respect me, i am not a simple shell\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "42\n") == 0)
			ft_putstr_purple("Jupiter or Saturn ?\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "the question\n") == 0)
			ft_putstr_purple("42\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "hello\n") == 0)
			ft_putstr_purple("Hello to !\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "render\n") == 0)
			ft_putstr_purple("It is simply impossible at this time !\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "environment\n") == 0)
			ft_putstr_purple("Environment => Currently unavailable\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "restart\n") == 0)
			ft_putstr_purple("Restart => Currently unavailable\n");
		else if (ft_strcmp(center->temporary_read_main_entry, "reboot\n") == 0)
			ft_putstr_purple("Reboot => Currently unavailable\n");
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
	ft_putstr_blue("Possibles Commands :\namalias : Hello to my A.I.O.S.\nexit : this command will close Amalias.\nmission : this command will give you state of the current Mission.\nenvironment : this command will show you the actual software environment.\nrender : this command will ask for a render generation.\nhelp : this command will give you some help.\nlocate : this command will give you your location in GPS coordinates.\ntime : this command will give you time and date.\nsyntax : this command will give you the level of syntax used actually.\nlock : this command will lock Amalias until you choose to unlock her.\nunlock : this command will unlock Amalias if you have already locked her.\nmemory : please do not test me on this side.\nsos : this command will call the autorities for emergency.\n");
}
