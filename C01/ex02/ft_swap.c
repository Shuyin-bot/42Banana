/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 05:38:03 by sqian             #+#    #+#             */
/*   Updated: 2025/08/15 02:53:08 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main() {

// 	int a;
// 	int b;
// 	a = 0;
// 	b = 7;

// 	printf("Before: %d | %d\n", a, b);
// 	ft_swap(&a, &b);

// 	printf("After: %d | %d\n", a, b);
// }