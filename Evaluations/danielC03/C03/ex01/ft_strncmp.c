/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakotov <drakotov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:09:42 by drakotov          #+#    #+#             */
/*   Updated: 2025/08/17 03:10:21 by drakotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;
	int				diff;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	int n = 4;
// 	char s1[] = "GOOSE";
// 	char s2[] = "GOOD";
// 	// printf("%i\n", ft_strncmp(s1, s2, n));
// 	printf("%i", strncmp(s1, s2, n));
// }
