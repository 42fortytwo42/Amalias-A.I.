/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indicate_initialized.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 01:53:00 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 02:24:21 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_indicate_initialized(int value, int value_total)
{
	if (1)
	{
		ft_putstr_blue("\t\tThere is ");
		ft_putnbr(value);
		ft_putstr_blue(" initialized process on a total of ");
		ft_putnbr(value_total);
		ft_putstr_blue(" process : ");
		ft_indicate_stats(value, value_total);
		ft_putstr("\n");
	}
}
