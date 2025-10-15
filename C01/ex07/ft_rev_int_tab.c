/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 08:01:22 by sqian             #+#    #+#             */
/*   Updated: 2025/08/15 02:39:55 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start_index;
	int	last_index;
	int	temp;

	start_index = 0;
	last_index = size - 1;
	temp = 0;
	while (start_index < last_index)
	{
		temp = tab[start_index];
		tab[start_index] = tab[last_index];
		tab[last_index] = temp;
		start_index++;
		last_index--;
	}
}

/*int main()
{

    int numbers[] = {5, 4, 8, -2, 5, 8};
    int the_size = 6;

    for (int i = 0; i < the_size; i++)
        printf("Original Aray: %d\n", numbers[i]);

    ft_rev_int_tab(numbers, the_size);
    for (int i = 0; i < the_size; i++)
        printf("Opperated Aray: %d\n", numbers[i]);
}*/