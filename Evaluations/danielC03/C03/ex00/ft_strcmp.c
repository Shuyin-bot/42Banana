/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:17:40 by drakotov          #+#    #+#             */
/*   Updated: 2025/08/17 04:28:49 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdio.h>
#include <string.h>

// int	ft_strcmp(char *s1, char *s2)

// {
// 	int		i;
// 	int		diff;

// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] != '\0')
// 	{
// 		if (s1[i] != s2[i])
// 		{
// 			diff = s1[i] - s2[i];
// 			return (diff);
// 		}
// 		i++;
// 	}
// 	return (s1[i] - s2[i]);
// }

int main (void)

{
	char s1[] = "Let's go!!!";
	char s2[] = "Legoooo!";

	// printf("%i\n", ft_strcmp(s1, s2));
	printf("%i", strcmp(s1, s2));
// 
}
