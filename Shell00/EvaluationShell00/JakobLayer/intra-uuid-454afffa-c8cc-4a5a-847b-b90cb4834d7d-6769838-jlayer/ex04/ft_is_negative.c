/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlayer <jlayer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:52:14 by jlayer            #+#    #+#             */
/*   Updated: 2025/07/31 15:45:54 by jlayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
	}
	else
	{
		c = 'N';
	}
	write(1, &c, 1);
}

int	main(void)
{
	ft_is_negative(0);
	return (0);
}
