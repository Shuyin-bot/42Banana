/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:55:44 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/11 18:14:04 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	a[] = "asdfhj[`k";
// 	char	b[] = "akkjkd";
// 	char	c[] = "3t3";
// 	char	d[] = "";

// 	printf("%s = ", a);
// 	printf("%d\n", ft_str_is_alpha(a));

// 	printf("%s = ", b);
// 	printf("%d\n", ft_str_is_alpha(b));

// 	printf("%s = ", c);
// 	printf("%d\n", ft_str_is_alpha(c));

// 	printf("%s = ", d);
// 	printf("%d\n", ft_str_is_alpha(d));
// 	return (0);
// }
