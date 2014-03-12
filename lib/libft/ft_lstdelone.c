/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 03:25:02 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/13 01:49:12 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (alst && *alst)
	{
		list = *alst;
		if (del && list->content != NULL && list->content_size > 0)
			(*del)(list->content, list->content_size);
		ft_memdel((void **)alst);
	}
}
