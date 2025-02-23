/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:30:10 by omaly             #+#    #+#             */
/*   Updated: 2025/02/19 16:37:21 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index){
	int acc = 1;
	if (index == 0)
		return 0;
	if (index == 1)

	return acc + ft_fibonacci(index-1);
}

int	main(void)
{
	return (0);
}
