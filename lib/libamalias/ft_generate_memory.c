/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:24:06 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 02:13:42 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_generate_memory(t_center_ai *center)
{
	int		count_initialized;
	int		count_total;

	count_initialized = (count_total = 0);
	if (center)
	{
		ft_putstr_green("\tAMALIAS MEMORY GENERATION\n\n");
		ft_putstr_yellow("Creating Memory File:\t\t\t");
        count_total++;
        if (ft_create_memory_log(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Generate Memory First Step : \t\t");
        count_total++;
        if (ft_generate_who_am_i(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Generate Memory Second Step : \t\t");
        count_total++;
        if (ft_generate_where_am_i(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Generate Memory Third Step : \t\t");
        count_total++;
        if (ft_generate_what_i_do(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Generate Memory Fourth Step : \t\t");
        count_total++;
        if (ft_generate_when_i_do(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
        /* Count Initialized*/
        ft_putstr_blue("\nMemory Generation Status : ");
        if (count_initialized != count_total)
        {
            ft_putstr_red("\t[ Process Incomplete ! ]\n\t");
            ft_putnbr(count_initialized);
            ft_putstr_blue(" Process initialized on a total of ");
            ft_putnbr(count_total);
            ft_putstr_blue(" Process.\n\n");
        }
        else
        {
			ft_putstr_green("\t[ Process Fully Completed ]\n\t");
			ft_putnbr(count_total);
            ft_putstr_blue(" Process initialized on a total of ");
            ft_putnbr(count_total);
            ft_putstr_blue(" Process.\n\n");
        }
		center->deploy_memory = count_initialized;
		center->deploy_memory_total = count_total;
	}
}

int		ft_generate_who_am_i(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}

int		ft_generate_where_am_i(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}

int		ft_generate_what_i_do(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}

int		ft_generate_when_i_do(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}
