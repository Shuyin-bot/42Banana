/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanner <nanner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:54:28 by nanner            #+#    #+#             */
/*   Updated: 2025/08/20 17:42:58 by nanner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(src));
	if (dest == NULL)
		return (NULL);
	else
		ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*returnvalues;

	index = 0;
	returnvalues = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!returnvalues)
		return (NULL);
	while (index < ac)
	{
		returnvalues[index].size = ft_strlen(av[index]);
		returnvalues[index].str = av[index];
		returnvalues[index].copy = ft_strdup(av[index]);
		index++;
	}
	returnvalues[index].str = 0;
	return (returnvalues);
}
