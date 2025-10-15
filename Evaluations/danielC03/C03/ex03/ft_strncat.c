/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakotov <drakotov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:24:40 by drakotov          #+#    #+#             */
/*   Updated: 2025/08/17 02:31:41 by drakotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)

// {
// 	unsigned int	i;
// 	unsigned int	j;

// 	j = 0;
// 	while (dest[j] != '\0')
// 	{
// 		j++;
// 	}
// 	i = 0;
// 	while (i < nb && dest[i] != '\0')
// 	{
// 		dest[j] = src[i];
// 		i++;
// 		j++;
// 	}
// 	dest[j] = '\0';
// 	return (dest);
// }

{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int main ()
// {
// 	unsigned int nb;

// 	nb = 3;
// 	char scr[] = " Boy";
// 	char dest[12] = "GOOD";
// 	printf("%s\n", ft_strncat(dest, scr, nb));
// 	// printf("%s", strncat(dest, scr, nb));
// }
