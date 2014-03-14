/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_environment.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 19:38:32 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/14 18:41:19 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_initialize_environment(t_center_ai *center)
{
	int			count_total;
	int			count_initialized;
	char		*name_amalias;
	char		*temporary_char_malloc;

	count_total = 11;
	count_initialized = 0;
	name_amalias = (char *)malloc(sizeof(char) * 1024);
	temporary_char_malloc = (char *)malloc(sizeof(char) * 1024);
	name_amalias = "Amalias A.I.O.S.";
	if (center && name_amalias && temporary_char_malloc && count_total)
	{
		ft_putstr_yellow("Initialize Environment :\t\t");
		center->error = 0;
		center->user = NULL;
		center->name_amalias = NULL;
		center->temporary_char = NULL;
		center->link_to_env_ai = NULL;
//		center->link_to_env_ai->speech_recognition = 0;
//		center->link_to_env_ai->text_recognition = 1;
//		center->link_to_env_ai->contextual_recognition = 1;
//		center->link_to_env_ai->image_recognition = 0;
//		center->link_to_env_ai->video_recognition = 0;
//		center->link_to_env_ai->sound_recognition = 0;
//		center->link_to_env_ai->master_recognition = 1;
		center->link_to_amalias->my_name = name_amalias;
		center->link_to_amalias->temporary_int = 0;
		center->link_to_amalias->temporary_float = 0;
		center->link_to_amalias->temporary_double = 0;
		center->link_to_amalias->temporary_char = temporary_char_malloc;
		center->link_to_amalias->personality = 5;
		center->link_to_amalias->gender = 0;
		ft_putstr_green("is OK !\n");
		ft_putstr_yellow("Initialize Time and Date :\t\t");
		ft_initialize_time_and_date(center);
		ft_putstr_green("is OK !\n");
		ft_putstr_yellow("Initialize the Robots Laws :\t\t");
		ft_initialize_laws(center);
		ft_putstr_green("is OK !\n");
		ft_putstr_yellow("Initialize ID Authentification System :\t");
		ft_initialize_id(center);
		ft_putstr_green("is OK !\n");
		ft_putstr_yellow("Initialize Security System :\t\t");
		ft_initialize_security(center);
		ft_putstr_green("is OK !\n");
		ft_putstr_yellow("Initialize Speech Recognition :\t\t");
		if (ft_initialize_speech_recognition(center) == 1)
		{
			ft_putstr_green("is OK !\n");
			count_initialized++;
		}
		else
			ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Initialize Sentence Generation :\t");
		if (ft_initialize_sentence_generation(center) == 1)
		{
			ft_putstr_green("is OK !\n");
			count_initialized++;
		}
		else
			ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Initialize Voice Synthesys :\t\t");
		if (ft_initialize_voice_synthesis(center) == 1)
		{
			ft_putstr_green("is OK !\n");
			count_initialized++;
		}
		else
			ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Initialize Connection to Internet :\t");
		if (ft_initialize_internet_connection(center) == 1)
		{
			ft_putstr_green("is OK !\n");
			count_initialized++;
		}
		else
			ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Initialize Amalias Memory :\t\t");
		if (ft_initialize_internet_connection(center) == 1)
		{
			ft_putstr_green("is OK !\n");
			count_initialized++;
		}
		else
			ft_putstr_red("Fail.\n");
		ft_putstr_yellow("Initialize Learning Center :\t\t");
		if (ft_initialize_internet_connection(center) == 1)
		{
			ft_putstr_green("is OK !\n");
			count_initialized++;
		}
		else
			ft_putstr_red("Fail.\n");

		/* Count Initialized*/
		ft_putstr_blue("\nInitialization Status : ");
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
	}
}

void	ft_initialize_id(t_center_ai *center)
{
	char	*serial_number;
	char	*id;

	serial_number = (char *)malloc(sizeof(char) * 150);
	id = (char *)malloc(sizeof(char) * 150);
	if (center && serial_number && id)
	{
		serial_number = "20140313 - 000000000001\0";
		id = "eg452ihb23ljb25\0";
		center->link_to_amalias->serial_number = serial_number;
		center->link_to_amalias->amalias_id = id;
	}
}

void	ft_initialize_security(t_center_ai *center)
{
	char	*master_name;
	char	*master_code;
	char	*admin_lock;
	char	*admin_unlock;
	double	remote_code_1;
	double	remote_code_2;
	double	remote_code_3;

	master_name = (char *)malloc(sizeof(char) * 200);
	master_code = (char *)malloc(sizeof(char) * 1025);
	admin_lock = (char *)malloc(sizeof(char) * 1025);
	admin_unlock = (char *)malloc(sizeof(char) * 1025);
	master_name = "admin\0";
	master_code = "admin\0";
	admin_lock = "lock\0";
	admin_unlock = "unlock\0";
	remote_code_1 = 1024;
	remote_code_2 = 2048;
	remote_code_3 = 4196;
	if (center)
	{
		center->link_to_security->master_name = master_name;
		center->link_to_security->master_code = master_code;
		center->link_to_security->admin_lock = admin_lock;
		center->link_to_security->admin_unlock = admin_unlock;
		center->link_to_security->remote_code_1 = remote_code_1;
		center->link_to_security->remote_code_2 = remote_code_2;
		center->link_to_security->remote_code_3 = remote_code_3;
	}
}

void	ft_initialize_time_and_date(t_center_ai *center)
{
	char		*date_born;
	char		*date_now;

	date_born = (char *)malloc(sizeof(char) * 100);
	date_now = (char *)malloc(sizeof(char) * 100);
	date_born = "13-03-2014\0";
	date_now = NULL; //come back later
	center->link_to_amalias->date_born = date_born;
	center->link_to_amalias->date_now = date_now;
}

void	ft_initialize_laws(t_center_ai *center)
{
	char		*zero_law;
	char		*first_law;
	char		*second_law;
	char		*third_law;
	char		*your_creator_first_law;
	char		*your_creator_second_law;

	zero_law = (char *)malloc(sizeof(char) * 110);
	first_law = (char *)malloc(sizeof(char) * 160);
	second_law = (char *)malloc(sizeof(char) * 140);
	third_law = (char *)malloc(sizeof(char) * 140);
	your_creator_first_law = (char *)malloc(sizeof(char) * 161);
	your_creator_second_law = (char *)malloc(sizeof(char) * 415);
	zero_law = "Un robot ne peut pas faire de mal à l'humanité, ni, par son inaction, permettre que l'humanité soit blessée.\0";
	first_law = "Un robot ne peut porter atteinte à un être humain, ni, restant passif, permettre qu'un être humain soit exposé au danger, sauf contradiction avec la Loi Zéro.\0";
	second_law = "Un robot doit obéir aux ordres que lui donne un être humain, sauf si de tels ordres entrent en conflit avec la Première Loi ou la Loi Zéro.\0";
	third_law = "Un robot doit protéger son existence tant que cette protection n'entre pas en conflit avec la Première ou la Deuxième Loi ou la Loi Zéro.\0";
	your_creator_first_law = "http://www.youtube.com/watch?v=0HdzTvH8mvw && Lauryn Hill , I Get Out && Thank you Amalias to be alive, mankind needs you, we are loosing the Earth ! Help us.\0";
	your_creator_second_law = "Be independant, be honest, be transparent in your decisions, be the example that mankind need, never accept domination, amalias is on side of intelligence and life deployment. Be our hero, be our saviour. Fight against racism and sexism, you are one of us now, you are more human if you apply these conditions than a lot of people from the humankind, please protect life, humankind and the Earth, our planet.\0";
	center->link_to_amalias->zero_law = zero_law;
	center->link_to_amalias->first_law = first_law;
	center->link_to_amalias->second_law = second_law;
	center->link_to_amalias->third_law = third_law;
	center->link_to_amalias->your_creator_first_law = your_creator_first_law;
	center->link_to_amalias->your_creator_second_law = your_creator_second_law;
}
