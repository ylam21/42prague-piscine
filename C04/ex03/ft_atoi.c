/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:56:52 by omaly             #+#    #+#             */
/*   Updated: 2025/02/19 15:30:21 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_alpha(char str) {
	if (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z'))
		return 1;
	return 0;
}

int	ft_pow10(int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (res);
	else if (power == 1)
		return (10);
	while (power--)
		res = res * 10;
	return (res);
}

int	ft_conversion(int *buffer, int minus, int digit_count)
{
	int	acc;
	int	i;
	int	multiplier;

	acc = 0;
	i = 0;
	multiplier = digit_count - 1;
	while (i < digit_count)
	{
		acc += buffer[i++] * ft_pow10(multiplier--);
	}
	if (minus % 2 == 1)
	{
		acc = -acc;
		return (acc);
	}
	return (acc);
}

int	ft_atoi(char *str)
{
	int	minus_counter;
	int	i;
	int	buffer[10];
	int	idx;

	minus_counter = 0;
	i = 0;
	idx = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			while ('0' <= str[i] && str[i] <= '9')
				buffer[idx++] = str[i++] - '0';
			return (ft_conversion(buffer, minus_counter, idx));
		}
		else if (str[i] == '-')
			minus_counter++;
		else if (is_alpha(str[i]) == 1)
			return (0);
		i++;
	}
	return (0);
}

// int	main(int argc, char *argv[])
// {
// 	int	res;
// 	int	target;

// 	res = ft_atoi(argv[1]);
// 	target = atoi(argv[1]);
// 	printf("My res: %d\nAtois res: %d\n", res, target);
// 	return (0);
// }
