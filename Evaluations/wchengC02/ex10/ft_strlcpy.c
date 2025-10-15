/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:45:45 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/12 18:26:06 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// The strlcpy() function copies up to size - 1 characters from the
// NUL-terminated string src to dst, NUL-terminating the result.

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	dest_1[10] = "";
	char	dest_2[5];
	char	dest_3[8] = "sdhgf";
	char	src[13] = "a little more";
	char	empty[] = "";

	printf("src = %s\n", src);
	printf("original dest = %s\n", dest_1);
	ft_strlcpy(dest_1, src, sizeof(dest_1));
	printf("new dest = %s\n", dest_1);
	printf("new dest length = %d\n\n", ft_strlcpy(dest_1, src, sizeof(dest_1)));

	printf("src = %s\n", src);
	printf("original dest = %s\n", dest_2);
	ft_strlcpy(dest_2, src, sizeof(dest_2));
	printf("new dest = %s\n", dest_2);
	printf("new dest length = %d\n\n", ft_strlcpy(dest_2, src, sizeof(dest_2)));

	printf("src = %s\n", empty);
	printf("original dest = %s\n", dest_3);
	ft_strlcpy(dest_3, empty, sizeof(dest_3));
	printf("new dest = %s\n", dest_3);
	printf("new dest length = %d\n\n",
		ft_strlcpy(dest_3, empty, sizeof(dest_3)));
	return (0);
}
