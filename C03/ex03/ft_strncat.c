/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 08:24:42 by sqian             #+#    #+#             */
/*   Updated: 2025/08/20 04:38:37 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	while (dest[i] != '\0')
		i++;
	l = 0;
	while (src[l] != '\0' && l < nb)
	{
		dest[i + l] = src[l];
		l++;
	}
	dest[i + l] = '\0';
	return (dest);
}

// int	main()
// {
// 	char d[255] = "Littleshit";
// 	char s[] = "bigshit";
// 	printf("%s", ft_strncat(d, s, 5));
// }