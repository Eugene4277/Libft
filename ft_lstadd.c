/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:41:58 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/23 22:56:59 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *new_node;

	if (!*alst || !new)
		return ;
	new_node = *alst;
	if (!new_node)
		new_node = new;
	else
	{
		new_node = new;
		new_node->next = *alst;
		*alst = new;
	}
}
