/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqian <sqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:04:43 by hgao              #+#    #+#             */
/*   Updated: 2025/08/20 01:07:12 by sqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include	<stdio.h>

// int	main(void)
// {
// 	int *h;
// 	int size;
// 	int i;
// 	size = ft_ultimate_range(&h ,3, 10);
// 	printf("size = %d\n",size);
// 	if (size <= 0)
// 	{
// 		if (h == NULL)
// 			printf("h is NULL\n");
// 		return (0);
// 	}	
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ",h[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free (h);
// 	return (0);
// }
