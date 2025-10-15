/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spostica <spostica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:57:11 by spostica          #+#    #+#             */
/*   Updated: 2025/08/18 16:14:01 by spostica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		r = nb * ft_recursive_power(nb, power - 1);
	return (r);
}

// int	main()
// {
// 	int	nb = 2;
// 	int	power = 4;
// 	printf ("%d", ft_recursive_power(nb, power));
// }
