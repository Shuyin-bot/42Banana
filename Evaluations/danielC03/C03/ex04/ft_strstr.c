/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakotov <drakotov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 21:50:30 by drakotov          #+#    #+#             */
/*   Updated: 2025/08/16 23:14:38 by drakotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j + i] == to_find[j] && str[i + j] != '\0'
			&& to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int main ()
// {
// 	char str[] = "I am doing good so far, I took my time.";
// 	char to_find[] = "good";

// 	printf("%s", ft_strstr(str, to_find));
// 	// printf("%s\n", strstr(str, to_find));
// }
