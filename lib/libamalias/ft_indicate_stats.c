/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indicate_stats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 01:56:54 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/17 02:22:27 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libamalias.h"

void	ft_indicate_stats(int value, int value_total)
{
	float	value_one;
	float	value_two;

	value_one = (float)value;
	value_two = (float)value_total;
	if (1)
	{
		if (value_one != 0 || value_two != 0)
		{
			ft_putstr(" ");
			ft_putnbr((value_one / value_two) * 100);
			ft_putstr(" % (percent)");
		}
		else
		{
			ft_putstr("0 % (percent)");
		}
	}
}
