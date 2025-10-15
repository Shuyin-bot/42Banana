/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 08:28:53 by sqian             #+#    #+#             */
/*   Updated: 2025/08/14 03:10:58 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	counter1;
	int	counter2;

	counter1 = 0;
	while (counter1 < size - 1)
	{
		counter2 = 0;
		while (counter2 < size - counter1 - 1)
		{
			if (tab[counter2] > tab[counter2 + 1])
			{
				temp = tab[counter2];
				tab[counter2] = tab[counter2 + 1];
				tab[counter2 + 1] = temp;
			}
			counter2++;
		}
		counter1++;
	}
}

/*int main() {
    int sleeeeeep[] = {5, 8, 77, -9, 1};

    ft_sort_int_tab(sleeeeeep, 5);

    for (int i = 0; i < 5; i++)
        printf("%d, ", sleeeeeep[i]);
}*/