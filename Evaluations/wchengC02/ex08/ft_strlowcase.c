/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:56:47 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/11 18:14:40 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		else
			str++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	a[] = "ASFFF234h";
// 	char	b[] = "sdfh43";
// 	char	c[] = "J^&*TYj24W";

// 	printf("a = %s\n", a);
// 	ft_strlowcase(a);
// 	printf("result = %s\n", a);

// 	printf("b = %s\n", b);
// 	ft_strlowcase(b);
// 	printf("result = %s\n", b);

// 	printf("c = %s\n", c);
// 	ft_strlowcase(c);
// 	printf("result = %s\n", c);

// 	return (0);
// }
