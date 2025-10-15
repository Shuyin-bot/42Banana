/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 07:49:44 by sqian             #+#    #+#             */
/*   Updated: 2025/08/08 07:57:32 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	c_a_r(int a, int b)
{
	return (a + b);
}

void	assignment(void)
{
	int	a;
	int	b;

	a = 44;
	b = -2;

	{
		a = c_a_r(a, b);
		b = (a - 2) * 2;
	}
	write()
}

int	main(void)
{
    int a;
    int b;
    a = 6;
    b = 7;

	void c_a_r(a, b);
}
