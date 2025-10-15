/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spostica <spostica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:10:06 by spostica          #+#    #+#             */
/*   Updated: 2025/08/18 16:13:50 by spostica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power >= 1)
	{
		a = a * nb;
		power--;
	}
	return (a);
}

// int	main()
// {
// 	int	nb = 10;
// 	int	power = 2;
// 	printf("%d", ft_iterative_power(nb, power));
// }