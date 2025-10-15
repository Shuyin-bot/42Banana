/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spostica <spostica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:43:21 by spostica          #+#    #+#             */
/*   Updated: 2025/08/18 16:55:27 by spostica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

// int	main()
// {
// 	int	n = 5;
// 	printf ("%d", ft_recursive_factorial(n));
// }