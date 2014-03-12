/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 18:42:07 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/12 18:55:11 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Error code is made of 8 (eight characters) */
/* You will find the reference in libamalias_errors.h */

#include "libamalias.h"

void	ft_print_error(char *error)
{
	ft_putstr_green("Starting\t");
	ft_putstr_red("=-> Error Report <-=\n");
	ft_putstr_blue(error);
	ft_putstr_green("Ending\t");
	ft_putstr_red("=-> Error Report <-=\n");
}

void	ft_print_error_and_call_back(char *error)
{
	ft_print_error(char *error);
	ft_amalias_call_back();
}
