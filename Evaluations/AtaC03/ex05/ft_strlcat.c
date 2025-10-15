/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacan <akacan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 23:04:09 by akacan            #+#    #+#             */
/*   Updated: 2025/08/14 16:29:04 by akacan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i +1] = '\0';
	return (dest_len + ft_strlen(src));
}
