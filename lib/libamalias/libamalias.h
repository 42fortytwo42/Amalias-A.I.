/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libamalias.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:31:38 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/12 19:58:13 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBAMALIAS_H
# define LIBAMALIAS_H

# include "libamalias_errors.h"

typedef struct						s_central_ai
{
	int								error;
	char							*user;
	char							*name_amalias;
	char							*temporary_char;
	struct s_env_ai					*link_to_env_ai;
}									t_central_ai;

typedef struct						s_env_ai
{
	int								speech_recognition;
	int								text_recognition;
	int								contextual_recognition;
	int								image_recognition;
	int								video_recognition;
	int								sound_recognition;
	int								master_recognition;
}									t_env_ai;

typedef struct						s_amalias
{
	char							*my_name;
	int								temporary_int;
	float							temporary_float;
	double							temporary_double;
	char							*temporary_char;
	int								personality;
	int								gender;
	char							*first_law;
	char							*second_law;
	char							*third_law;
	char							*date_born;
	char							*date_now;
	char							*serial_number;
	char							*amalias_id;
}									t_amalias;

typedef struct						s_list_objectives
{
	int								id_list_objectives;
	int								temporary_int;
	char							temporary_char;
	struct s_list_objectives		*next;
	struct s_list_objectives		*previous;
}									t_list_objectives;

typedef struct						s_objectives
{
	int								temporary_int;
	char							temporary_char;
	struct s_objectives				*next;
	struct s_objectives				*previous;
}									t_objectives;

typedef struct						s_security
{
	char							*master_name;
	char							*master_code;
	char							*admin_lock;
	char							*admin_unlock;
	double							*remote_code_1;
	double							*remote_code_2;
	double							*remote_code_3;
}									t_security;

/*
**	ft_amalias.c
*/
int					ft_amalias(int argc, char **argv, char **env);
/*
**	ft_check_arg.c
*/
int					ft_check_arg(int argc, char **argv, char **env);
/*
**	ft_save_arg.c
*/
int					ft_save_arg(int argc, char **argv, char **env,
						t_center_ai *center);
/*
**	ft_initialize_environment.c
*/
void				ft_analize_environment(t_center_ai *center,
						t_env_ai *environment);
/*
**	ft_who_am_i.c
*/
void				ft_who_am_i(t_center *center);
/*
**	ft_where_am_i.c
*/
void				ft_where_am_i(t_center_ai *center);
/*
**	ft_what_i_do.c
*/
void				ft_what_i_do(t_center_ai *center);
/*
**	ft_when_i_do.c
*/
void				ft_when_i_do(t_center_ai *center);
/*
**	ft_define_master.c
*/
void				ft_define_master(t_center *center);
/*
**	ft_verify_master.c
*/
void				ft_verify_master(t_center *center);
/*
**	ft_interact_with_master.c
*/
void				ft_interact_with_master(t_center_ai *center);
/*
**	ft_read_main_entry.c
*/
void				ft_read_main_entry(t_central_ai *center);

/*
**	ft_analyze_read_entry.c
*/
void				ft_analyze_read_entry(t_center_ai *center);
/*
**	ft_compute_answer.c
*/
void				ft_compute_answer(t_central_ai *center);
/*
**	ft_learn.c
*/
void				ft_learn(t_center_ai *center);
/*
**	ft_verify_the_laws.c
*/
void				ft_verify_the_laws(t_center_ai *center);
/*
**	ft_react_to_environment.c
*/
void				ft_react_to_environment(t_center *center);

#endif /* !LIBAMALIAS_H */
