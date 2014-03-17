#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2014/03/17 02:01:55 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libamalias.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

AR = ar rc

RANLIB = ranlib

HEADER = libamalias.h

SRC =	ft_amalias.c \
		ft_analyze_read_entry.c \
		ft_check_arg.c \
		ft_compute_answer.c \
		ft_define_master.c \
		ft_initialize_environment.c \
		ft_interact_with_master.c \
		ft_learn.c \
		ft_print_error.c \
		ft_react_to_environment.c \
		ft_read_main_entry.c \
		ft_save_arg.c \
		ft_verify_master.c \
		ft_verify_the_laws.c \
		ft_what_i_do.c \
		ft_when_i_do.c \
		ft_where_am_i.c \
		ft_who_am_i.c \
		ft_amalias_call_back \
		ft_revise_learn.c \
		ft_initialize_speech_recognition.c \
		ft_initialize_sentence_generation.c \
		ft_initialize_voice_synthesis.c \
		ft_initialize_internet_connection.c \
		ft_initialize_amalias_memory.c \
		ft_initialize_learning_system.c \
		ft_engage_contextualizer.c \
		ft_open_memory_log.c \
		ft_create_memory_log.c \
		ft_generate_memory.c \
		ft_regenerate_memory \
		ft_indicate_initialized.c \
		ft_indicate_stats.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo --- Projet $(NAME) --GO GO GO -
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo Conception librairie $(NAME)
		@echo -----------------------------
		@echo --- Compilation en cours ----
		$(CC) $(CFLAGS) $(SRC)
		@echo --- Compilation terminee ----
		@echo -----------------------------
		@echo --- Creation librairie ------
		$(AR) $(NAME) $(OBJ) $(HEADER)
		@echo --- librairie disponible ----
		@echo -----------------------------
		@echo indexation de la librairie en cours
		@echo -----------------------------
		$(RANLIB) $(NAME)
		@echo -----------------------------
		@echo indexation de la librairie effectue
		@echo -----------------------------
		@echo Conception librairie $(NAME) OK
		@echo -----------------------------

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re :	fclean all
