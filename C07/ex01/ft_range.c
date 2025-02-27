/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:16:36 by omaly             #+#    #+#             */
/*   Updated: 2025/02/25 14:22:59 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * (size));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < (size))
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int	low;
// 	int	high;
// 	int	*res;

// 	low = 4;
// 	high = 10;
// 	res = ft_range(low, high);
// 	for (int i = 0; i < (high - low); i++)
// 	{
// 		printf("%d ", res[i]);
// 	}
// 	if (res)
// 		free(res);
// 	return (0);
// }
