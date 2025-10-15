/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 04:12:54 by sqian             #+#    #+#             */
/*   Updated: 2025/08/15 05:58:49 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	firste;
	int	temp;

	firste = 0;
	while (firste < (size / 2))
	{
		temp = tab[firste];
		tab[firste] = tab[size - 1 - firste];
		tab[size - 1 - firste] = temp;
		firste++;
	}
}

int	main(void)
{
	int	tab[5] = {3, 7, 6, 9, 2};
	int	size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
