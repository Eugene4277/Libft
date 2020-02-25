/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:52:59 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/25 14:03:00 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		word_count(const char *s, char c)
{
	int			i;

	i = 0;
	if (*s && *s != c)
	{
		s++;
		i++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				i++;
		}
		s++;
	}
	return (i);
}

static int		length(const char *s, char c)
{
	int i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;
	size_t		i;
	int			j;

	j = 0;
	if (!(arr = (char**)malloc(sizeof(char*) * word_count(s, c) + 1)))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		i = 0;
		if (*s != c && *s)
		{
			if (!(arr[j] = (char*)malloc(length(s, c) + 1)))
				return (NULL);
			while (*s && *s != c)
				arr[j][i++] = (char)*s++;
			arr[j][i] = '\0';
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}
