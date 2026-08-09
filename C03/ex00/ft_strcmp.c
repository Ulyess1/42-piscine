/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 23:47:26 by marvin          #+#    #+#             */
/*   Updated: 2026/07/28 23:49:03 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i] && s1[i] == s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);
}
#include <stdio.h>
int main()
{
    char str[] = "hello";
    char str2[] = "hello";
    printf("%d",ft_strcmp(str,str2));
}