/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:50:40 by fyanez            #+#    #+#             */
/*   Updated: 2025/08/12 04:16:40 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */


#include <stdio.h>
int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
// NOW ONLY LOWERCASE SAME 


int main() {
	printf("%d", ft_str_is_lowercase("sdSas"));
}