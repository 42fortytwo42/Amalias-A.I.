/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 18:16:55 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/12 23:12:16 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		*lst_alloc_content(void const *content,
                               size_t content_size)
{
	void	*new_content;

	new_content = malloc(content_size);
	if (new_content)
		ft_memcpy(new_content, content, content_size);
	return (new_content);
}

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*chain;

	chain = (t_list *)malloc(sizeof(*chain));
	if (chain)
	{
		ft_bzero((void *)chain, sizeof(*chain));
		if (content)
		{
			chain->content = lst_alloc_content(content, content_size);
			if (!chain->content)
				ft_memdel((void *)chain);
			else
				chain->content_size = content_size;
		}
	}
	return (chain);
}
