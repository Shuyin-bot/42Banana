/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanner <nanner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:54:20 by nanner            #+#    #+#             */
/*   Updated: 2025/08/20 17:43:00 by nanner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

void	ft_putnbr(int nbr)
{
	long	nbr_long;

	nbr_long = (long)nbr;
	if (nbr_long < 0)
	{
		write(1, "-", 1);
		nbr_long = nbr_long * (-1);
	}
	if (nbr_long >= 10)
	{
		ft_putnbr(nbr_long / 10);
	}
	else
	{
		write(1, &nbr_long, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str == 0)
	{
		ft_putnbr(par[index].size);
		write(1, "\n", 1);
		ft_putstr(par[index].str);
		write(1, "\n", 1);
		ft_putstr(par[index].copy);
		write(1, "\n", 1);
		index++;
	}
	ft_putnbr(par[index].size);
	write(1, "\n", 1);
	ft_putstr(par[index].str);
	write(1, "\n", 1);
	ft_putstr(par[index].copy);
	write(1, "\n", 1);
}
