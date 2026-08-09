/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 15:04:23 by marvin          #+#    #+#             */
/*   Updated: 2026/08/03 21:20:01 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power - 1)
	{
		nb *= n;
		i++;
	}
	return (nb);
}
