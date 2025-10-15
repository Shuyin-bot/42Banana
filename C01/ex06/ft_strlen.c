/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 07:54:07 by sqian             #+#    #+#             */
/*   Updated: 2025/08/12 07:58:57 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	meow;

	meow = 0;
	while (str[meow] != '\0')
		meow++;
	return (meow);
}

/*int main() {
    printf("%d", ft_strlen("Meow"));
}*/