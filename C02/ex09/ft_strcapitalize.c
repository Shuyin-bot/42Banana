/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 01:17:04 by sqian             #+#    #+#             */
/*   Updated: 2025/08/19 07:06:48 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	check1(char *str, int kiwi)
{
	if (*str >= 'A' && *str <= 'Z' && !kiwi)
		*str += 32;
	else if (*str >= 'a' && *str <= 'z' && kiwi)
		*str -= 32;
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	p;

	i = 0;
	while (str[i] != '\0')
	{
		check1(&str[i], p);
		if (check(str[i]))
			p = 0;
		else
			p = 1;
		i++;
	}
	return (str);
}

// int main()
// {
//     char mwo[] = "Banana123 asda asdw2";
//     printf("%s", ft_strcapitalize(mwo));
// }