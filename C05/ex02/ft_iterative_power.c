/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:13:30 by omaly             #+#    #+#             */
/*   Updated: 2025/02/19 16:21:21 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power) {
	int acc = nb;
	if (power == 0)
		return 1;
	else if (power < 0)
		return 0;
	while (power > 1) {
		acc = acc * nb;
		power--;
	}
	return acc;
}

// int main(void) {
// 	printf("%d",ft_iterative_power(2,5));
// 	return 0;
// }
