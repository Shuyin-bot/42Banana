/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacan <akacan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:10:29 by akacan            #+#    #+#             */
/*   Updated: 2025/08/14 16:10:46 by akacan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		n++;
	}
	return (n);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					dest_len;
	unsigned int		i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
