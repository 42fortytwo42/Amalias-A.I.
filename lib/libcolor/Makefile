#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2014/02/17 18:16:05 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libcolor.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

AR = ar rc

RANLIB = ranlib

HEADER = libcolor.h

SRC =	ft_united_colors_of_42.c \
		ft_united_colors_of_42_extended.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo --- Projet LIBCOLOR --GO GO GO -
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo Conception librairie libcolor.a
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
		@echo Conception librairie libcolor.a OK
		@echo -----------------------------

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re :	fclean all
