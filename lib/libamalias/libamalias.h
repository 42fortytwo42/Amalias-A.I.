/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libamalias.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:31:38 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/12 19:12:21 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBAMALIAS_H
# define LIBAMALIAS_H

# include "libamalias_errors.h"

typedef struct				s_central_ai
{
	int						error;
	char					*user;
	char					*name_amalias;
	char					*temporary_char;
	struct s_env_ai			*link_to_env_ai;
}							t_central_ai;

typedef struct				s_env_ai
{
	int						speech_recognition;
	int						text_recognition;
	int						context_recognition;
}							t_env_ai;

typedef struct				s_amalias
{
	char					*my_name;
	int						temporary_int;
	float					temporary_float;
	double					temporary_double;
	char					*temporary_char;
}							t_amalias;

typedef struct				s_security
{
	char					*master_name;
	char					*master_code;
	char					*admin_lock;
	char					*admin_unlock;
	double					*remote_code_1;
	double					*remote_code_2;
	double					*remote_code_3;
}							t_security;

/*
**	ft_amalias.c
*/
int		ft_amalias(int argc, char **argv, char **env);

/*
**	ft_amalias.c
*/


/*
**	ft_amalias.c
*/


#endif /* !LIBAMALIAS_H */
