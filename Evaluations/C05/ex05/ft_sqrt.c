/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spostica <spostica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:34:23 by spostica          #+#    #+#             */
/*   Updated: 2025/08/18 17:09:11 by spostica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	k;

	k = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (k * k <= nb)
	{
		if (k * k == nb)
			return (k);
		k++;
	}
	return (0);
}

// int main()
// {
// 	int nb = 10;
// 	printf("%d", ft_sqrt(nb));
// }