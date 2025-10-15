/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:09:52 by fyanez            #+#    #+#             */
/*   Updated: 2025/08/12 04:26:19 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
//oppposite than the other one.

int main() {

	char meow[] = "hi";



	printf("%s", ft_strlowcase(meow));
}