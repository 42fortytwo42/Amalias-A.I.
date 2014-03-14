/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_amalias.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:33:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/14 20:17:04 by tle-mign         ###   ########.fr       */
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
		ft_putstr_purple("\tWelcome to the Machine.\n\n");
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
		ft_putstr_green("\tAMALIAS ENGAGING INITIALIZATION\n\n");
		ft_initialize_environment(center);
		ft_check_memory(center);
		ft_define_master(center);
		ft_putstr_green("\n\tAMALIAS ENGAGING CONTEXTUALIZATION\n\n");
		ft_engage_contextualizer(center);
		if (ft_check_amalias_deployement(center) != 1)
		{
			ft_putstr_blue("\n\t=> Amalias is starting in Safe Boot Mode <=\n\n");
		}
		else
		{
			ft_putstr_blue("Amalias is starting ! Enjoy my friend.\n");
		}
		ft_putstr_purple("\tWelcome to the machine\n\tWelcome on Amalias.\n");
	}
}

void	ft_check_memory(t_center_ai *center)
{
	if (center)
	{
//		if a memory log file exist => Memory Restoration !
		if (access("log/memory/memory.amalias", F_OK ) != -1 )
			ft_regenerate_memory(center);
		else
			ft_generate_memory(center);
	}
}

int		ft_check_amalias_deployement(t_center_ai *center)
{
	int		count;
	int		count_total;

	count_total = 3;
	count = 0;
	if (center)
	{
		ft_putstr("\n");
		if (center->deploy_initialization > 0)
		{
			ft_putstr_green("\tInitialization Process Fully Completed.\n");
			count++;
		}
		else
			ft_putstr_red("\tInitialization Process Incomplete !\n");
		if (center->deploy_memory > 0)
		{
			ft_putstr_green("\tMemory Process Fully Completed.\n");
			count++;
		}
		else
			ft_putstr_red("\tMemory Process Incomplete !\n");
		if (center->deploy_initialization > 0)
		{
			ft_putstr_green("\tContextualization Process Fully Completed.\n");
			count++;
		}
		else
			ft_putstr_red("\tContextualization Process Incomplete !\n");
		if (count == count_total)
		{
			ft_putstr_green("\tAmalias is fully deployed on this computer.\n");
			return (1);
		}
		else
			ft_putstr_red("\tAmalias is not fully deployed on this computer.\n");
	}
	return (0);
}
