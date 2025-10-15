/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:27:05 by kdombale          #+#    #+#             */
/*   Updated: 2025/08/12 13:23:12 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

char	ft_putchar(char c);

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int n)
{
	long	long_number;
	int		j;

	long_number = n;
	if (long_number < 0)
	{
		ft_putchar('-');
		long_number = long_number * -1;
	}
	if (long_number >= 0 && long_number < 10)
	{
		ft_putchar(long_number + '0');
	}
	if (long_number >= 10)
	{
		j = 0;
		ft_putnbr(long_number / 10);
		j = long_number % 10 + '0';
		write(1, &j, 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr(1234);
// }