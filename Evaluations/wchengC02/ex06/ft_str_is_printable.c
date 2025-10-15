/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:03:10 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/11 18:14:26 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 33 || *str > 126)
			return (0);
		else
			str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	a[] = "	";
// 	char	b[] = " ";
// 	char	c[] = "J^&*ghj24W";
// 	char	d[] = "";

// 	printf("a = %s\n", a);
// 	printf("result = %d\n", ft_str_is_printable(a));

// 	printf("b = %s\n", b);
// 	printf("result = %d\n", ft_str_is_printable(b));

// 	printf("c = %s\n", c);
// 	printf("result = %d\n", ft_str_is_printable(c));

// 	printf("d = %s\n", d);
// 	printf("result = %d\n", ft_str_is_printable(d));
// 	return (0);
// }
