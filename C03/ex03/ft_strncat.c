/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:12:23 by marvin          #+#    #+#             */
/*   Updated: 2026/08/03 18:12:24 by marvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    i = 0;
    int j;
    j = 0;
    while(dest[i] != '\0' )
        i++;
    while(src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] != '\0';
    return(dest);
}
#include <stdio.h>
int main()
{
    char str[20] = "He";
    char str2[] = "llo";
    ft_strncat(str,str2,3);
    printf("%s",str);
}