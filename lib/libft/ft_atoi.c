/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:33:01 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/19 19:37:43 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_atoi(const char *numstring)
{
	int		number;
	int		sign;
	int		i;

	sign = 1;
	number = 0;
	i = 0;
	if (numstring == NULL)
		return (0);
	while ((numstring[i] >= 9 && numstring[i] <= 13) || numstring[i] == ' ')
			i++;
	if (numstring[i] == '+' || numstring[i] == '-')
	{
		if (numstring[i] == '-')
			sign *= -1 ;
		i++;
	}
	while (numstring[i] >= '0' && numstring[i] <= '9')
	{
		number = (number * 10) + (numstring[i] - '0');
		i++;
	}
	return (number * sign);
}
