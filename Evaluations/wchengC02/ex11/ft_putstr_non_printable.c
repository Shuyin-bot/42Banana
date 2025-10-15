/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:40:21 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/12 17:36:00 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// hexadecimal: 0-9, a-f
// hex_dec[16] = "0123456789abcdef";
// unsigned char: hex will not be negative; signed: may give error
// for example newline = 10; c = 10; c / 16 = 0; c % 16 = 10;
// hex[0] = 0; hex[10] = a; \n = \0a

#include <unistd.h>

void	ft_hexadecimal(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 || *str == 127)
		{
			write(1, &*str, 1);
			str++;
		}
		else
		{
			write(1, "\\", 1);
			ft_hexadecimal(*str);
			str++;
		}
	}
}

// int	main(void)
// {
// 	write(1, "a = ", 4);
// 	char	a[] = "space tab\tnewline\n";	//expected: "space\20tab\09newline\0a"
// 	ft_putstr_non_printable(a);
// 	write(1, "\n\n", 2);
// 	write(1, "b = ", 4);
// 	char	b[] = "			\b\r\n";	//expected "\09\09\09\08\0d\0a"
// 	ft_putstr_non_printable(b);
// 	return (0);
// }
