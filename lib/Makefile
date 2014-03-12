#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2014/03/12 18:46:32 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = lib

all : $(NAME)

$(NAME) :
		make -C libft
		make -C libcolor
		make -C libamalias

clean :
			make clean -C libft
			make clean -C libcolor
			make clean -C libamalias

fclean : clean
			make fclean -C libft
			make fclean -C libcolor
			make fclean -C libamalias

re : fclean all
