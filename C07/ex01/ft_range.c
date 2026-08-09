/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 21:26:30 by marvin          #+#    #+#             */
/*   Updated: 2026/08/03 21:26:31 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*t;

	if (min >= max)
		return (NULL);
	t = (int *)malloc((max - min) * sizeof(int));
	if (!t)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}