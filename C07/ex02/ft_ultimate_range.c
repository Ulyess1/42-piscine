/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 21:26:32 by marvin          #+#    #+#             */
/*   Updated: 2026/08/03 21:26:33 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*t;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	t = (int *)malloc((max - min) * sizeof(int));
	if (!t)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min + i < max)
	{
		t[i] = min + i;
		i++;
	}
	*range = t;
	return (max - min);
}