/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:04:38 by hgao              #+#    #+#             */
/*   Updated: 2025/08/20 01:25:29 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// #include	<stdio.h>

// int	main(void)
// {
// 	int	*arr;
// 	int	min = 17;
// 	int	max = 10;
// 	int	size = max - min;

// 	arr = ft_range(min, max);
// 	if (!arr)
// 	{
// 		printf("NULL\n");
// 		return (0);
// 	}
// 	int i = 0;
// 	while (i < size)
//  {	
// 		printf("%d", arr[i]);
// 		i++;
//  }
// 	printf("\n");
// 	return (0);
// }
