/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:01:30 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/24 18:40:27 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*elem;
	t_list	*return_pointer;

	if (!lst || !f)
		return (NULL);
	elem = f(lst);
	if (!(new_lst = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	return_pointer = new_lst;
	lst = lst->next;
	while (lst)
	{
		elem = f(lst);
		if (!(new_lst->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		lst = lst->next;
		new_lst = new_lst->next;
	}
	return (return_pointer);
}
