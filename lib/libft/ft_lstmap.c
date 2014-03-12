/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 21:03:40 by tle-mign          #+#    #+#             */
/*   Updated: 2013/12/12 23:10:46 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		lst_del_content(void *content, size_t content_size)
{
	if (content && content_size > 0)
		free(content);
}

static void		lst_alloc_copy_imp(t_list **head, t_list **lst,
													t_list *node)
{
	if (*head == NULL)
	{
		*head = node;
		*lst = node;
	}
	else
	{
		(*lst)->next = node;
		(*lst) = (*lst)->next;
	}
}

static t_list	*lst_alloc_copy(t_list *list)
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*result;

	new_list = NULL;
	result = NULL;
	while (list)
	{
		temp = ft_lstnew(NULL, 0);
		if (temp == NULL)
		{
			if (result)
			{
				ft_lstdel(&result, &lst_del_content);
				break ;
			}
		}
		lst_alloc_copy_imp(&result, &new_list, temp);
		list = list->next;
	}
	return (result);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*it;
	t_list	*new_list;
	t_list	*new_head;

	if (!lst || !f)
		return (NULL);
	new_list = lst_alloc_copy(lst);
	new_head = new_list;
	it = lst;
	while (it != NULL && new_list != NULL)
	{
		it = (*f)(it);
		if (it)
		{
		new_list->content = it->content;
		new_list->content_size = it->content_size;
		new_list = new_list->next;
		}
		it = it->next;
	}
	return (new_head);
}
