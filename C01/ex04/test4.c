/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 02:16:11 by sqian             #+#    #+#             */
/*   Updated: 2025/08/15 02:27:26 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

// int main()
// {
//     int a = 8;
//     int b = 3;
//     ft_ultimate_div_mod(&a, &b);
//     printf("%d\n%d", a, b);
// }