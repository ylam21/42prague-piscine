/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:51:37 by omaly             #+#    #+#             */
/*   Updated: 2025/02/19 16:11:53 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	acc;

	acc = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (acc);
	while (nb)
		acc *= nb--;
	return acc;
}

// int	main(void)
// {
// 	printf("Result: %d\n", ft_iterative_factorial(10));
// 	return (0);
// }
