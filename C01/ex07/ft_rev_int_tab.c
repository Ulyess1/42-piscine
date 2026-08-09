/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 23:46:19 by marvin          #+#    #+#             */
/*   Updated: 2026/08/03 18:09:23 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
#include <stdio.h>
int main()
{
	int i;
	i = 0;
	int size;
	size = 5;
	int str[] = {1,2,3,4,5};
	ft_rev_int_tab(str,5);
	while(i < size)
	{
		
		printf("%d",str[i]);
		i++;
	}
}