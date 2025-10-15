/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 08:30:34 by kdombale          #+#    #+#             */
/*   Updated: 2025/08/12 19:45:22 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_check_whitespaces(char *str);

int		ft_count_minus(char *str_new);

char	*ft__minus_plus(char *str);

int	ft_atoi(char *str)
{
	int		i;
	int		base;
	int		count;
	char	*str_new;
	char	*str_new_new;

	i = 0;
	base = 0;
	count = 0;
	str_new = ft_check_whitespaces(str);
	count = ft_count_minus(str_new);
	str_new_new = ft__minus_plus(str_new);
	while (str_new_new[i] >= '0' && str_new_new[i] <= '9')
	{
		base = base * 10;
		base = (str_new_new[i] - '0') + base;
		i++;
	}
	if (count % 2 != 0)
		return (base * (-1));
	return (base);
}

char	*ft_check_whitespaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
	{
		i++;
	}
	return (&str[i]);
}

int	ft_count_minus(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft__minus_plus(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	return (&str[i]);
}

int	main(void)
{
	int result;
	char *str;
	str = "   +++++------++1234abd";
	result = ft_atoi(str);
	printf("%d", result);
	return (0);
}
