/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:44:19 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/12 18:44:23 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		else
			str++;
	}
	return (str);
}

int	main(void)
{
	char	a[] = "nad234h";
	char	b[] = "BRBRBR";
	char	c[] = "J^&*gaj24W";

	printf("a = %s\n", a);
	ft_strupcase(a);
	printf("result = %s\n", a);

	printf("b = %s\n", b);
	ft_strupcase(b);
	printf("result = %s\n", b);

	printf("c = %s\n", c);
	ft_strupcase(c);
	printf("result = %s\n", c);

	return (0);
}
