/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:24:00 by wcheung           #+#    #+#             */
/*   Updated: 2025/08/12 18:22:50 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char a[8] = "1234567";
	char b[10] = "ABCDEFGHI";
	printf("src = %s\n", a);
	printf("dest = %s\n", b);

	ft_strncpy(b, a, 3);
	printf("new dest = %s\n", b);
	ft_strncpy(b, a, 5);
	printf("new dest = %s\n", b);
	ft_strncpy(b, a, 7);
	printf("new dest = %s\n", b);
	return (0);
}
