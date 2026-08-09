/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 15:04:16 by marvin          #+#    #+#             */
/*   Updated: 2026/08/03 21:20:05 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < n)
	{
		nb *= (n - i);
		i++;
	}
	return (nb);
}
