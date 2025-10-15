/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altaube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:54:53 by altaube           #+#    #+#             */
/*   Updated: 2025/08/18 21:01:46 by altaube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_reverse_alphabet(void)
{
	char reverse_alphabet;

	reverse_alphabet = 'z';
	while (reverse_alphabet >= 'a')
	{
		ft_putchar(reverse_alphabet);
		reverse_alphabet--;
	}
}

