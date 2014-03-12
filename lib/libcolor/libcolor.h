/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libcolor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:28:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/02/17 18:17:37 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBCOLOR_H
# define LIBCOLOR_H

# include "../libft/libft.h"

# define BLACK		"\033[1;30m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define YELLOW		"\033[1;33m"
# define BLUE		"\033[1;34m"
# define PURPLE		"\033[1;35m"
# define CYAN		"\033[1;36m"
# define GREY		"\033[1;37m"
# define LBLACK		"\033[0;30m"
# define LRED		"\033[0;31m"
# define LGREEN		"\033[0;32m"
# define LYELLOW	"\033[0;33m"
# define LBLUE		"\033[0;34m"
# define LPURPLE	"\033[0;35m"
# define LCYAN		"\033[0;36m"
# define LGREY		"\033[0;37m"
# define OWHITE		"\e[0;37m"
# define RESET		"\e[0m"
# define OBlack 	"\e[0;30m"
# define ORED 		"\e[0;31m"
# define OGREEN 	"\e[0;32m"
# define OYELLOW 	"\e[0;33m"
# define OBLUE 		"\e[0;34m"
# define OPURPLE 	"\e[0;35m"
# define OCYAN 		"\e[0;36m"
# define BBlack 	"\e[1;30m"
# define BRed 		"\033[1;31m"
# define BGreen 	"\e[1;32m"
# define BYellow 	"\e[1;33m"
# define BBlue 		"\033[1;34m"
# define BPurple 	"\e[1;35m"
# define BCyan 		"\e[1;36m"
# define BWhite 	"\e[1;37m"
# define UBlack 	"\e[4;30m"
# define URed 		"\e[4;31m"
# define UGreen		"\e[4;32m"
# define UYellow 	"\e[4;33m"
# define UBlue 		"\e[4;34m"
# define UPurple 	"\e[4;35m"
# define UCyan 		"\e[4;36m"
# define UWhite 	"\e[4;37m"
# define On_Black 	"\e[40m"
# define On_Red 	"\e[41m"
# define Green 		"\e[42m"
# define On_Yellow 	"\e[43m"
# define On_Blue 	"\e[44m"
# define On_Purple 	"\e[45m"
# define On_Cyan 	"\e[46m"
# define On_White 	"\e[47m"
# define IBlack 	"\e[0;90m"
# define IRed 		"\e[0;91m"
# define IGreen 	"\e[0;92m"
# define IYellow	"\e[0;93m"
# define IBlue		"\e[0;94m"
# define IPurple 	"\e[0;95m"
# define ICyan		"\e[0;96m"
# define IWhite		"\e[0;97m"
# define BIBlack	"\e[1;90m"
# define BIRed		"\e[1;91m"
# define BIGreen	"\e[1;92m"
# define BIYellow	"\e[1;93m"
# define BIBlue		"\e[1;94m"
# define BIPurple	"\e[1;95m"
# define BICyan		"\e[1;96m"
# define BIWhite	"\e[1;97m"
# define On_IBlack	"\e[0;100m"
# define On_IRed	"\e[0;101m"
# define On_IGreen	"\e[0;102m"
# define On_IYellow	"\e[0;103m"
# define On_IBlue	"\e[0;104m"
# define On_IPurple	"\e[10;95m"
# define On_ICyan	"\e[0;106m"
# define On_IWhite	"\e[0;107m"

/*
**	ft_united_colors_of_42.c
*/
void		ft_putstr_red(char *str);
void		ft_putstr_green(char *str);
void		ft_putstr_blue(char *str);
void		ft_putstr_grey(char *str);
void		ft_putstr_yellow(char *str);
/*
**	ft_united_colors_of_42_extended.c
*/
void		ft_putstr_purple(char *str);

#endif /* !LIBCOLOR_H */
