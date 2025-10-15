/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:55:52 by fyanez            #+#    #+#             */
/*   Updated: 2025/08/12 04:17:51 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
 


int main() {
	printf("%d", ft_str_is_printable("\n"));
}