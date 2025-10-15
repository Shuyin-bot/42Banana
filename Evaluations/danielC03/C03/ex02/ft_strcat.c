/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakotov <drakotov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 01:27:35 by drakotov          #+#    #+#             */
/*   Updated: 2025/08/17 02:18:05 by drakotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int main (void)
// {
// 	char scr[] = " Boy";
// 	char dest[15] = "GOOD";
// 	printf("%s\n", ft_strcat(dest, scr));
// 	// printf("%s", strcat(dest, scr));
// }
