/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 06:48:44 by sqian             #+#    #+#             */
/*   Updated: 2025/08/14 03:10:17 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
int main(){


    int a = 5;
    int b = 2;

    printf("Before the Accident: %d | %d\n", a, b);

    ft_ultimate_div_mod(&a,&b);

    printf("After the Accident: %d | %d\n", a, b);

}
    */