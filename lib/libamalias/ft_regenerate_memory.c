/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_regenerate_memory.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:37:33 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 09:07:43 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_regenerate_memory(t_center_ai *center)
{
	int		count_initialized;
	int		count_total;

	count_initialized = (count_total = 0);
	if (center)
	{
		ft_putstr_green("\tAMALIAS MEMORY REGENERATION\n\n");
		ft_putstr_yellow("Opening Memory :\t\t\t");
        count_total++;
        if (ft_open_memory_log(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define Memory First Step : \t\t");
        count_total++;
        if (ft_who_am_i(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define Memory Second Step : \t\t");
        count_total++;
        if (ft_where_am_i(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define Memory Third Step : \t\t");
        count_total++;
        if (ft_what_i_do(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define Memory Fourth Step : \t\t");
        count_total++;
        if (ft_when_i_do(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
        /* Count Initialized*/
        ft_putstr_blue("\nMemory Regeneration Status : ");
        if (count_initialized != count_total || count_initialized == 0)
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
			ft_putnbr(count_initialized);
            ft_putstr_blue(" Process initialized on a total of ");
            ft_putnbr(count_total);
            ft_putstr_blue(" Process.\n\n");
        }
		center->deploy_memory = count_initialized;
		center->deploy_memory_total = count_total;
	}
}
