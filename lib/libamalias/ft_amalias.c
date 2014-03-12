/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amalias.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:33:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/12 20:20:04 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

int		ft_amalias(int argc, char **argv, char **env)
{
	t_center_ai		*center;
	t_env_ai		*environment;

	center = (t_center_ai *)malloc(sizeof(t_center_ai));
	environment = (t_env_ai *)malloc(sizeof(t_env_ai));
	if (argc && argv && env && center && environment
		&& ft_check_arg(argc, argv, env) == 1
		&& ft_save_arg(argc, argv, env, center) == 1)
	{
		center->link_to_env_ai = environment;
		ft_initialize_environment(center, environment);
		ft_who_am_i(center);
		ft_where_am_i(center);
		ft_what_i_do(center);
		ft_when_i_do(center);
		ft_define_master(center);
		while (center->error == NULL)
		{
			ft_verify_master(center);
			ft_interact_with_master(center);
			ft_read_main_entry(center);
			ft_analyze_read_entry(center);
			ft_compute_answer(center);
			ft_learn(center);
			ft_verify_the_laws(center);
			ft_react_to_environment(center);
		}
		if (center->error != NULL)
			ft_putstr_blue("You are leaving Amalias A.I.O.S.\n");
	}
	else
		ft_putstr_red("Error While Engaging Amalias Engine.\n");
	return (0);
}
