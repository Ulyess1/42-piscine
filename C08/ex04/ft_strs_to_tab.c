/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:01:49 by marvin          #+#    #+#             */
/*   Updated: 2026/08/05 04:28:58 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*buffer;
	char	*dest;

	buffer = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!buffer)
		return (NULL);
	dest = buffer;
	while (*src)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	t_stock_str	*buffer;
	int			index;

	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	buffer = stock;
	index = 0;
	while (index < ac)
	{
		buffer->size = ft_strlen(*av);
		buffer->str = *av;
		buffer->copy = ft_strdup(*av);
		buffer++;
		av++;
		index++;
	}
	buffer->str = NULL;
	return (stock);
}
