/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:48:51 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/11 18:14:15 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		else
			str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	a[] = "asd&Z";
// 	char	b[] = "79as679";
// 	char	c[] = "asdfhj";
// 	char	d[] = "";

// 	printf("a = %s\n", a);
// 	printf("result = %d\n", ft_str_is_lowercase(a));

// 	printf("b = %s\n", b);
// 	printf("result = %d\n", ft_str_is_lowercase(b));

// 	printf("c = %s\n", c);
// 	printf("result = %d\n", ft_str_is_lowercase(c));

// 	printf("d = %s\n", d);
// 	printf("result = %d\n", ft_str_is_lowercase(d));
// 	return (0);
// }
