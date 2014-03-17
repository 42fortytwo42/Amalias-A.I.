/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libamalias.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:31:38 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 10:36:10 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBAMALIAS_H
# define LIBAMALIAS_H

# define BUFFER_READ_MAIN_ENTRY 4196
# define BUFFER_READ_MEMORY 8000000

# include <stdio.h>
# include <fcntl.h>
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
	char							*temporary_read_memory;
	int								deploy_initialization;
	int								deploy_initialization_total;
	int								deploy_memory;
	int								deploy_memory_total;
	int								deploy_contextualization;
	int								deploy_contextualization_total;
	int								deploy_virtualization;
	int								deploy_virtualization_total;
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
	struct s_memory					*link_to_memory;
}									t_amalias;

typedef struct						s_memory
{
	double							id_memory;
	char							*type;
	char							*title;
	char							*description;
	char							*content_small;
	char							*content_medium;
	char							*content_large;
	void							*link_to_anything;
	struct s_memory					*next;
	struct s_memory					*previous;
}									t_memory;

typedef struct						s_memory_file_list
{
	double							id_memory_file_list;
	struct s_memory_file_list		*next;
	struct s_memory_file_list		*previous;
}									t_memory_file_list;

typedef struct						s_memory_file
{
	double							id_memory_file;
	char							*title;
	char							*description_light;
	char							*description_large;
	int								*number_int;
	float							*number_float;
	double							*number_double;
	void							*link_to_anything;
	struct s_memory_crap_list		*link_to_memory_list_scrap;
	struct s_memory_file			*next;
	struct s_memory_file			*previous;
}									t_memory_file;

typedef struct						s_memory_scrap_list
{
	double							id_memory_scrap_list;
	struct s_memory_crap			*link_to_memory_scrap;
	struct s_memory_scrap_list		*next;
	struct s_memory_scrap_list		*previous;
}									t_memory_scrap_list;

typedef struct						s_memory_scrap
{
	double							id_memory_scrap;
	int								number_int;
	float							number_float;
	double							number_double;
	char							*string;
	void							*link_to_anything;
	struct s_memory_snippet_list	*link_to_memory_snippet_list;
	struct s_memory_scrap			*next;
	struct s_memory_scrap			*previous;
}									t_memory_scrap;

typedef struct						s_memory_snippet_list
{
	double							id_memory_snippet_list;
	struct s_memory_snippet			*link_to_memory_snippet;
	struct s_memory_snippet_list	*next;
	struct s_memory_snippet_list	*previous;
}									t_memory_snippet_list;

typedef struct						s_memory_snippet
{
	double							id_memory_snippet;
	int								number_int;
	float							number_float;
	double							number_double;
	char							*string;
	void							*link_to_anything;
	struct s_memory_sub_list		*link_to_memory_subconscious_list;
	struct s_memory_snippet			*next;
	struct s_memory_snippet			*previous;
}									t_memory_snippet;

typedef struct						s_memory_sub_list
{
	double							id_memory_sub_list;
	struct s_memory_subconscious	*link_to_subconscious;
	struct s_memory_sub_list		*next;
	struct s_memory_sub_list		*previous;
}									t_memory_sub_list;

typedef struct						s_memory_subconscious
{
	double							id_subconscious;
	int								number_int;
	float							number_float;
	double							number_double;
	void							*link_to_anything;
	char							*string;
	struct s_memory_subconscious	*next;
	struct s_memory_subconscious	*previous;
}									t_memory_subconscious;

typedef struct						s_mission_list
{
	int								id_mission_list;
	struct s_mission_list			*next;
	struct s_mission_list			*previous;
}									t_mission_list;

typedef struct						s_mission
{
	int								id_mission;
	int								started;
	int								finished;
	int								date_start;
	int								date_end;
	char							*description;
	char							*mission_small;
	char							*mission_medium;
	char							*mission_large;
	void							*link_to_anything;
	struct s_list_objectives		*link_to_list_objectives;
	struct s_mission				*next;
	struct s_mission				*previous;
}									t_mission;

typedef struct						s_list_objectives
{
	int								id_list_objectives;
	char							*description;
	int								started;
	int								finished;
	int								date_start;
	int								date_end;
	int								temporary_int;
	char							temporary_char;
	struct s_list_objectives		*next;
	struct s_list_objectives		*previous;
}									t_list_objectives;

typedef struct						s_objectives
{
	int								id_objective;
	char							*description;
	char							*objective_small;
	char							*objective_medium;
	char							*objective_large;
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

typedef struct						s_security_tag
{
	int								id_security_tag;
	double							tag_first_part;
	double							tag_second_part;
	double							tag_three_part;
	char							key;
	struct s_security				*next;
	struct s_security				*previous;
}									t_security_tag;

typedef struct						s_shipowner
{
	int								id_shipowner;
	char							*name;
	char							*organisation;
	char							*galaxy;
	char							*solar_system;
	char							*planet;
	char							*country;
	char							*city;
	double							key1;
	double							key2;
	double							key3;
	double							key4;
	char							*key5;
	struct s_ship_list				*link_to_ship_list;
	struct s_crew					*link_to_crew_member;
	struct s_shipowner				*next;
	struct s_shipowner				*previous;
}									t_shipowner;

typedef struct						s_ship_list
{
	int								id_ship_list;
	char							*name;
	char							*crew_tag;
	char							*last_known_position;
	struct s_crew					*last_commander_known;
	struct s_ship					*link_to_ship;
	struct s_ship_list				*next;
	struct s_ship_list				*previous;
}									t_ship_list;

typedef struct						s_ship
{
	int								id_ship;
	char							*name_ship;
	int								crew_members;
	int								date_origin;
	char							*place_of_origin;
	char							*planet;
	char							*solar_system;
	char							*galaxy;
	double							key1;
	double							key2;
	double							key3;
	char							*key4;
	int								crew_capacity;
	char							*last_known_position;
	struct s_crew					*last_known_captain;
	struct s_crew_list				*link_to_crew;
	struct s_ship					*next;
	struct s_ship					*previous;
}									t_ship;

typedef struct						s_vehicules_list
{
	int								id_vehicules_list;
	char							*description;
	char							*name_list;
	struct s_vehicules_list			*next;
	struct s_vehicules_list			*previous;
}									t_vehicules_list;

typedef struct						s_vehicules
{
	int								id_vehicule;
	int								crew_capacity;
	char							*transport_mode;
	char							*description;
	char							*name_vehicule;
	char							*last_known_position;
	struct s_vehicules				*next;
	struct s_vehicules				*previous;
}									t_vehicules;

typedef struct						s_crew_list
{
	int								id_crew_list;
	char							*crew_name;
	int								key1;
	char							*key2;
	struct s_crew					*link_to_crew_members;
	struct s_crew_list				*next;
	struct s_crew_list				*previous;
}									t_crew_list;

typedef struct						s_crew
{
	int								id_crew_member;
	char							*grade;
	char							*surname;
	char							*lastname;
	char							*pseudo;
	char							*key;
	char							*level;
	char							*last_known_position;
	struct s_ship					*last_actual_ship;
	struct s_crew_list				*link_to_crew_list;
	struct s_crew					*next;
	struct s_crew					*previous;
}									t_crew;

/*
**	ft_amalias.c
*/
char				*ft_amalias(int argc, char **argv, char **env);
void				ft_define_context(t_center_ai *center);
void				ft_check_memory(t_center_ai *center);
int					ft_check_amalias_deployement(t_center_ai *center);
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
int					ft_initialize_laws(t_center_ai *center);
int					ft_initialize_time_and_date(t_center_ai *center);
int					ft_initialize_id(t_center_ai *center);
int					ft_initialize_security(t_center_ai *center);
int					ft_initialize_environment_extended_1(t_center_ai *center);
int					ft_initialize_working_abilities(t_center_ai *center);
int					ft_initialize_environment_interaction(t_center_ai *center);
/*
**	ft_who_am_i.c
*/
int					ft_who_am_i(t_center_ai *center);
/*
**	ft_where_am_i.c
*/
int					ft_where_am_i(t_center_ai *center);
/*
**	ft_what_i_do.c
*/
int					ft_what_i_do(t_center_ai *center);
/*
**	ft_when_i_do.c
*/
int					ft_when_i_do(t_center_ai *center);
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
int					ft_open_memory_log(t_center_ai *center);
/*
**	ft_create_memory_log.c
*/
int					ft_create_memory_log(t_center_ai *center);
/*
**	ft_generate_memory.c
*/
void				ft_generate_memory(t_center_ai *center);
int					ft_generate_who_am_i(t_center_ai *center);
int					ft_generate_where_am_i(t_center_ai *center);
int					ft_generate_what_i_do(t_center_ai *center);
int					ft_generate_when_i_do(t_center_ai *center);
/*
**	ft_regenerate_memory.c
*/
void				ft_regenerate_memory(t_center_ai *center);
int					ft_define_location_galaxy(t_center_ai *center);
int					ft_define_location_solar_system(t_center_ai *center);
int					ft_define_location_planetary(t_center_ai *center);
int					ft_define_location_actual(t_center_ai *center);
int					ft_get_gps_info(t_center_ai *center);
/*
**	ft_indicate_initialized.c
*/
void				ft_indicate_initialized(int value, int value_total);
/*
**	ft_indicate_stats.c
*/
void				ft_indicate_stats(int value, int value_total);
/*
**	ft_engage_virtualization
*/
void				ft_engage_virtualization(t_center_ai *center);
/*
**	ft_generate_fourdimension_matrix.c
*/
int					ft_generate_fourdimension_matrix(t_center_ai *center);
/*
**	ft_integrate.c
*/
int					ft_integrate_motion_to_fourdimension_matrix(t_center_ai *center);
int					ft_integrate_data_to_fourdimension_matrix(t_center_ai *center);
int					ft_integrate_galactic_map(t_center_ai *center);
int					ft_activate_matrix_in_subconscious(t_center_ai *center);
int					ft_integrate_physics_to_matrix(t_center_ai *center);

#endif /* !LIBAMALIAS_H */
