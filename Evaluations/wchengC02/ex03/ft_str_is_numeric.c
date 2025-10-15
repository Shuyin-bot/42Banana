/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:08:26 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/11 18:14:10 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	a[] = "1234^56";
// 	char	b[] = "79as679";
// 	char	c[] = "0971";
// 	char	d[] = "";

// 	printf("a = %s\n", a);
// 	printf("result = %d\n", ft_str_is_numeric(a));

// 	printf("b = %s\n", b);
// 	printf("result = %d\n", ft_str_is_numeric(b));

// 	printf("c = %s\n", c);
// 	printf("result = %d\n", ft_str_is_numeric(c));

// 	printf("d = %s\n", d);
// 	printf("result = %d\n", ft_str_is_numeric(d));
// 	return (0);
// }
