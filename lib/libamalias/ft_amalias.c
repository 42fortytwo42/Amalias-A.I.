/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amalias.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:33:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/12 19:10:24 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

int		ft_amalias(int argc, char argv, char env)
{
	t_center_ai		*center;
	t_env_ai		*environment;

	center = (t_center_ai *)malloc(sizeof(t_center_ai));
	environment = (t_env_ai *)malloc(sizeof(t_env_ai));
	if (argc && argv && env && center && environment)
	{
		center->link_to_env_ai->environment;
		ft_initialize_environment();
		ft_who_am_i();
		ft_where_am_i();
		ft_what_i_do();
		ft_when_i_do();
		ft_define_master();
		while (center->error == NULL)
		{
			ft_verify_master();
			ft_interact_with_master();
			ft_read_main_entry();
			ft_analyze_read_entry();
			ft_compute_answer();
			ft_learn();
		}
		if (center->error != NULL)
			ft_putstr_blue("You are leaving Amalias A.I.O.S.\n");
	}
	else
		ft_putstr_red("Error While Engaging Amalias Engine.\n");
	return (0);
}
