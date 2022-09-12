/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jclement < jclement@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:32:35 by jclement          #+#    #+#             */
/*   Updated: 2022/07/31 13:32:35 by jclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_number(int n)
{
    char str[10] = "0123456789";

    if (n > 9)
        ft_number(n / 10);
    write(1, &str[n % 10], 1);
}

int main(void)
{
    int i;

    i = 0;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            ft_number(i);
            write(1, "\n", 1);
        }      
        i++;
    }
    return (0);
}