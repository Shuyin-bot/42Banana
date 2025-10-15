/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:58:42 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/11 18:54:02 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		else
			str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	a[] = "asd&Z";
// 	char	b[] = "79aCVV79";
// 	char	c[] = "JFJFHW";
// 	char	d[] = "";

// 	printf("a = %s\n", a);
// 	printf("result = %d\n", ft_str_is_uppercase(a));

// 	printf("b = %s\n", b);
// 	printf("result = %d\n", ft_str_is_uppercase(b));

// 	printf("c = %s\n", c);
// 	printf("result = %d\n", ft_str_is_uppercase(c));

// 	printf("d = %s\n", d);
// 	printf("result = %d\n", ft_str_is_uppercase(d));
// 	return (0);
// }
