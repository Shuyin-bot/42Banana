/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 07:16:07 by sqian             #+#    #+#             */
/*   Updated: 2025/08/20 04:38:39 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[i + n] = '\0';
	return (dest);
}

// int	main()
// {
// 	char c[] = "littleshit";
// 	char d[100] = "bigshit";
// 	printf("%s", ft_strcat(c, d));
// }
