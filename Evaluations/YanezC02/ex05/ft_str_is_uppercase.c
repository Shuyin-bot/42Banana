/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:52:48 by fyanez            #+#    #+#             */
/*   Updated: 2025/08/12 04:17:07 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
 


int main() {
	printf("%d", ft_str_is_uppercase("SADFA"));
}