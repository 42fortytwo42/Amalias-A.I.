/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amalias.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:33:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/13 19:47:30 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

char	*ft_amalias(int argc, char **argv, char **env)
{
	t_center_ai		*center;
	t_env_ai		*environment;
	t_amalias		*amalias;
	t_security		*security;
	char			*error;

	center = (t_center_ai *)malloc(sizeof(t_center_ai));
	environment = (t_env_ai *)malloc(sizeof(t_env_ai));
	amalias = (t_amalias *)malloc(sizeof(t_amalias));
	security = (t_security *)malloc(sizeof(t_security));
	error = (char *)malloc(sizeof(char) * 9);
	if (argc && argv && env && center && environment && amalias && security && error
		&& ft_check_arg(argc, argv, env) == 1
		&& ft_save_arg(argc, argv, env, center) == 1)
	{
		center->link_to_env_ai = environment;
		center->link_to_security = security;
		center->link_to_amalias = amalias;
		error[9] = '\0';
		center->error = error;
		ft_define_context(center);
		while (center->error == NULL)
		{
			ft_verify_master(center);
			ft_interact_with_master(center);
			ft_read_main_entry(center);
			ft_analyze_read_entry(center);
			ft_learn(center);
			ft_compute_answer(center);
			ft_revise_learn(center);
			ft_verify_the_laws(center);
			ft_react_to_environment(center);
		}
		if (center->error != NULL)
		{
			ft_putstr_blue("You are leaving Amalias A.I.O.S.\n");
			return (center->error);
		}
	}
	else
		ft_putstr_red("Error While Engaging Amalias Engine.\n");
	return (NULL);
}

void	ft_define_context(t_center_ai *center)
{
	if (center)
	{
		ft_putstr_green("AMALIAS ENGAGING INITIALIZATION\n");
		ft_initialize_environment(center);
		ft_putstr_green("AMALIAS ENVIRONMENT INITIALIZED ! CHECK\n");
		ft_putstr_green("AMALIAS ENGAGING CONTEXTUALIZATION\n");
//		ft_who_am_i(center);
//		ft_where_am_i(center);
//		ft_what_i_do(center);
//		ft_when_i_do(center);
//		ft_define_master(center);
		ft_putstr_green("AMALIAS CONTEXTUALIZATION INITIALIZED ! CHECK\n");
		ft_putstr_blue("AMALIAS STARTING ! Enjoy my friend.\n");
	}
}
