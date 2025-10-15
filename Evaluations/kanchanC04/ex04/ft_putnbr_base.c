/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:30:49 by kdombale          #+#    #+#             */
/*   Updated: 2025/08/12 15:08:42 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_convert(int nbr, int val, char *base)
{
	if (nbr >= val)
	{
		ft_convert(nbr / val, val, base);
	}
	write(1, &base[nbr % val], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	val;

	val = ft_strlen(base);
	ft_convert(nbr, val, base);
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789ABCDEF");
}
