/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jclement < jclement@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:56:22 by jclement          #+#    #+#             */
/*   Updated: 2022/07/30 15:56:22 by jclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
} 

int main(void)
{
    int *x;
    int *y;
    int valorx;
    int valory;

    valorx = 10;
    valory = 20;
    x = &valorx;
    y = &valory;
    ft_swap(x, y);
    return (0);
}