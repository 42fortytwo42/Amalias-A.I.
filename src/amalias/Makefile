#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/05 15:27:51 by tle-mign          #+#    #+#              #
#    Updated: 2014/03/12 18:39:42 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = Amalias

CFLAGS = -Wall -Werror -Wextra

CC = gcc

LIBRARY_LIBFT = -L ../../lib/libft/ -lft
LIBRARY_LIBCOLOR = -L ../../lib/libcolor/ -lcolor
LIBRARY_LIBAMALIAS = -L ../../lib/libamalias/ -lamalias

HEADER = ../../lib/

SRC = main.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo - Conception Executable $(NAME) -
		@echo -----------------------------
		@echo - compilation executable $(NAME) -
		@echo -----------------------------
		$(CC) $(CFLAGS) -I $(HEADER) -c $(SRC)
		@echo --- compilation objet ok ----
		@echo -----------------------------
		@echo --- Assemblage executable ---
		@echo -----------------------------
		$(CC) -o $(NAME) $(OBJ) $(LIBRARY_LIBFT) \
		$(LIBRARY_LIBAMALIAS) $(LIBRARY_LIBCOLOR)
		@echo -----------------------------
		@echo - succes de la compilation --
		@echo -----------------------------
		@echo - Conception executable OK --
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo -- Projet $(NAME)  MakeOver --
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo -- Merci et bonne journee ---
		@echo -----------------------------
		@echo ---- Execution de $(NAME) ----
		@echo -----------------------------
		@echo ----- 1D - 2D - 3D - 4D -----
		@echo -----------------------------
		mv $(NAME) ../../

clean :
			$(RM) $(OBJ)

fclean : clean
			$(RM) ../../$(NAME)

re : fclean all