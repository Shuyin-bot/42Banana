/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:47:17 by fyanez            #+#    #+#             */
/*   Updated: 2025/08/12 04:16:14 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}


int main() {
	printf("%d", ft_str_is_numeric("sdas"));
}