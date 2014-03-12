/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 03:33:03 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/12 23:06:26 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*current;
	t_list	*list;

	if (alst && *alst)
	{
		list = *alst;
		current = list->next;
		while (current)
		{
			next = current->next;
			ft_lstdelone(&current, del);
			current = next;
		}
		ft_lstdelone(alst, del);
	}
}
