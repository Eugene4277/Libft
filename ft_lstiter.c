/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:55:04 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/24 19:19:50 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *iter;

	if (!lst || !f)
		return ;
	iter = lst;
	while (iter)
	{
		f(iter);
		iter = iter->next;
	}
}
