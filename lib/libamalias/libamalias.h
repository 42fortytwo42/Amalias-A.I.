/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libamalias.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:31:38 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/14 19:28:17 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBAMALIAS_H
# define LIBAMALIAS_H

# define BUFFER_READ_MAIN_ENTRY 4196

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libamalias_errors.h"
# include "libamalias_define.h"
# include "../lib.h"

typedef struct						s_center_ai
{
	char							*error;
	char							*user;
	char							*name_amalias;
	char							*temporary_char;
	char							*temporary_read_main_entry;
	struct s_env_ai					*link_to_env_ai;
	struct s_amalias				*link_to_amalias;
	struct s_security				*link_to_security;
}									t_center_ai;

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
	char							*zero_law;
	char							*first_law;
	char							*second_law;
	char							*third_law;
	char							*your_creator_first_law;
	char							*your_creator_second_law;
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
	double							remote_code_1;
	double							remote_code_2;
	double							remote_code_3;
}									t_security;

/*
**	ft_amalias.c
*/
char				*ft_amalias(int argc, char **argv, char **env);
void				ft_define_context(t_center_ai *center);
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
void				ft_initialize_environment(t_center_ai *center);
void				ft_initialize_laws(t_center_ai *center);
void				ft_initialize_time_and_date(t_center_ai *center);
void				ft_initialize_id(t_center_ai *center);
void				ft_initialize_security(t_center_ai *center);
/*
**	ft_who_am_i.c
*/
void				ft_who_am_i(t_center_ai *center);
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
void				ft_define_master(t_center_ai *center);
/*
**	ft_verify_master.c
*/
void				ft_verify_master(t_center_ai *center);
/*
**	ft_interact_with_master.c
*/
void				ft_interact_with_master(t_center_ai *center);
/*
**	ft_read_main_entry.c
*/
void				ft_read_main_entry(t_center_ai *center);

/*
**	ft_analyze_read_entry.c
*/
void				ft_analyze_read_entry(t_center_ai *center);
void				ft_print_help(void);
/*
**	ft_compute_answer.c
*/
void				ft_compute_answer(t_center_ai *center);
/*
**	ft_learn.c
*/
void				ft_learn(t_center_ai *center);
/*
**	ft_revise_learn.c
*/
void				ft_revise_learn(t_center_ai *center);
/*
**	ft_verify_the_laws.c
*/
void				ft_verify_the_laws(t_center_ai *center);
/*
**	ft_react_to_environment.c
*/
void				ft_react_to_environment(t_center_ai *center);
/*
**	ft_amalias_call_back
*/
void				ft_amalias_call_back(t_center_ai *center);
/*
**	ft_print_error.c
*/
void				ft_print_error(char *error);
void				ft_print_error_and_call_back(t_center_ai *center, char *error);
/*
**	ft_initialize_speech_recognition.c
*/
int					ft_initialize_speech_recognition(t_center_ai *center);
/*
**	ft_initialize_sentence_generation.c
*/
int					ft_initialize_sentence_generation(t_center_ai *center);
/*
**	ft_initialize_voice_synthesis.c
*/
int					ft_initialize_voice_synthesis(t_center_ai *center);
/*
**	ft_initialize_internet_connection.c
*/
int					ft_initialize_internet_connection(t_center_ai *center);
/*
**	ft_initialize_amalias_memory.c
*/
int					ft_initialize_amalias_memory(t_center_ai *center);
/*
**	ft_initialize_learning_system.c
*/
int					ft_initialize_learning_system(t_center_ai *center);
/*
**	ft_engage_contextualizer.c
*/
void				ft_engage_contextualizer(t_center_ai *center);
/*
**	ft_open_memory_log.c
*/
void				ft_open_memory_log(t_center_ai *center);
/*
**	ft_create_memory_log.c
*/
void				ft_create_memory_log(t_center_ai *center);
/*
**	ft_generate_memory.c
*/
void				ft_generate_memory(t_center_ai *center);
void				ft_generate_who_am_i(t_center_ai *center);
void				ft_generate_where_am_i(t_center_ai *center);
void				ft_generate_what_i_do(t_center_ai *center);
void				ft_generate_when_i_do(t_center_ai *center);

#endif /* !LIBAMALIAS_H */
