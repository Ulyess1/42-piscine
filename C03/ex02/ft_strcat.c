/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:12:20 by marvin          #+#    #+#             */
/*   Updated: 2026/08/03 18:12:21 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    i = 0;
    int j;
    j = 0;

    while(dest[i] != '\0')
        i++;
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    return(dest);
}
#include <stdio.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    ft_strcat(str1,str2);
    printf("%s",str1,str2);
}