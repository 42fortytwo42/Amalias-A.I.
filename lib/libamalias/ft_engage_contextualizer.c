/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_engage_contextualizer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 18:38:23 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 09:07:08 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_engage_contextualizer(t_center_ai *center)
{
	int		count_initialized;
	int		count_total;

	count_initialized = (count_total = 0);
	if (center)
	{
		ft_putstr_yellow("Define Galaxy Location :\t\t");
        count_total++;
        if (ft_define_location_galaxy(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define Solar System Location : \t\t");
        count_total++;
        if (ft_define_location_solar_system(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define Planetary Location : \t\t");
        count_total++;
        if (ft_define_location_planetary(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define Actual Location : \t\t");
        count_total++;
        if (ft_define_location_actual(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Define GPS Location : \t\t\t");
        count_total++;
        if (ft_get_gps_info(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
        /* Count Initialized*/
        ft_putstr_blue("\nContextualization Status : ");
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
			ft_putnbr(count_total);
            ft_putstr_blue(" Process initialized on a total of ");
            ft_putnbr(count_total);
            ft_putstr_blue(" Process.\n\n");
        }
		center->deploy_contextualization = count_initialized;
		center->deploy_contextualization_total = count_total;
	}
}

int		ft_define_location_galaxy(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}

int		ft_define_location_solar_system(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}

int		ft_define_location_planetary(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}

int		ft_define_location_actual(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}

int		ft_get_gps_info(t_center_ai *center)
{
	if (center)
	{

	}
	return (0);
}
