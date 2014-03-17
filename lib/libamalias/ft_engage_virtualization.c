/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_engage_virtualization.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 03:25:24 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 03:43:57 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_engage_virtualization(t_center_ai *center)
{
	int		count_initialized;
	int		count_total;

	count_initialized = (count_total = 0);
	if (center)
	{
		ft_putstr_yellow("Generate 4D matrix :\t\t\t");
        count_total++;
        if (ft_generate_fourdimension_matrix(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Integrate Basics Data to matrix : \t");
        count_total++;
        if (ft_integrate_data_to_fourdimension_matrix(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Integrate Motion to matrix : \t\t");
        count_total++;
        if (ft_integrate_motion_to_fourdimension_matrix(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Integrate Galactic Map: \t\t");
        count_total++;
        if (ft_integrate_galactic_map(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Activate Matrix in Amalias : \t\t");
        count_total++;
        if (ft_activate_matrix_in_subconscious(center) == 1)
        {
            ft_putstr_green("is OK !\n");
            count_initialized++;
        }
        else
            ft_putstr_red("Fail.\n");
        /* Count Initialized*/
        ft_putstr_blue("\nVirtualization Status : ");
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
		center->deploy_virtualization = count_initialized;
		center->deploy_virtualization_total = count_total;
	}
}
