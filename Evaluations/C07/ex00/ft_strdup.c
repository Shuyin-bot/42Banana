/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:03:46 by hgao              #+#    #+#             */
/*   Updated: 2025/08/20 00:49:34 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*c;

	len = ft_strlen (src);
	c = (char *)malloc(sizeof(char) *(len + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

// #include	<stdio.h>
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Hello 42!";
// 	s2 = ft_strdup(s1);
// 	if (!s2)
// 	{
// 		printf("maloc failed\n");
// 		return (1);
// 	}
// 	printf ("original : %s\n", s1);
// 	printf ("duplicate : %s\n", s2);
// 	s2[0] = 'h';
// 	printf ("after change s2: %s\n", s2);
// 	printf ("original still : %s\n", s1);
// 	free (s2);
// }
