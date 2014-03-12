/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_united_colors_of_42.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 19:51:11 by tle-mign          #+#    #+#             */
/*   Updated: 2014/02/17 18:16:50 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "libcolor.h"

void		ft_putstr_red(char *str)
{
	ft_putstr(RED);
	ft_putstr(str);
}

void		ft_putstr_green(char *str)
{
	ft_putstr(GREEN);
	ft_putstr(str);
}

void		ft_putstr_blue(char *str)
{
	ft_putstr(BLUE);
	ft_putstr(str);
}

void		ft_putstr_grey(char *str)
{
	ft_putstr(GREY);
	ft_putstr(str);
}

void		ft_putstr_yellow(char *str)
{
	ft_putstr(YELLOW);
	ft_putstr(str);
}
