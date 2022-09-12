/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jclement < jclement@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:29:43 by jclement          #+#    #+#             */
/*   Updated: 2022/07/30 21:29:43 by jclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char *s1;
    char *s2;

    s1 = "Joanna";
    s2 = "Dafne";
    printf("%s\n", s1);
    ft_strcpy(s1, s2);
    printf("%s\n", s1);
    return (0);
}