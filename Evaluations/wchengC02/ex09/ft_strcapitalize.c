/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:21:16 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/12 18:48:15 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//uppercase: after space, signs
//lowercase: after uppercase, digits
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			&& (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == 32)
				str[i] -= 32;
			if (str[i - 1] >= 33 && str[i - 1] <= 47)
				str[i] -= 32;
		}
		i++;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (str[i + 1] == '\0' && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
	}
	return (str);
}

int	main(void)
{
	char	a[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("before = %s\n", a);
	ft_strcapitalize(a);
	printf("after = %s\n", a);

	char	b[] = "HELP";
	printf("before = %s\n", b);
	ft_strcapitalize(b);
	printf("after = %s\n", b);
	return (0);
}
