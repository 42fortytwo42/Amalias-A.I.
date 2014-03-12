#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2013/12/12 22:17:05 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

AR = ar rc

RANLIB = ranlib

HEADER = libft.h

SRC = ft_memset.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memchr.c \
			ft_bzero.c ft_strcmp.c ft_strncmp.c ft_strchr.c \
			ft_strrchr.c ft_strnstr.c ft_memccpy.c \
			ft_putchar.c ft_atoi.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_strcat.c \
			ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c \
			ft_putstr.c ft_strncat.c ft_strncpy.c ft_tolower.c \
			ft_toupper.c ft_strstr.c ft_memalloc.c ft_memdel.c ft_strnew.c\
			ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
			ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
			ft_strsplit.c ft_itoa.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c \
			ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
			ft_lstmap.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo --- Projet LIBFT --GO GO GO -
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo -Conception librairie libft.a
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
		@echo -Conception librairie libft.a OK
		@echo -----------------------------

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re :	fclean all
