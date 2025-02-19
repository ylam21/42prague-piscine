/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:34:14 by omaly             #+#    #+#             */
/*   Updated: 2025/02/18 17:57:05 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_positive(int num)
{
	char	buffer[10];
	int		index;

	index = 0;
	if (num == 0)
		write(1, "0", 1);
	while (num)
	{
		buffer[index++] = (num % 10) + '0';
		num /= 10;
	}
	while (index > 0)
		write(1, &buffer[--index], 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_write_positive(nb);
}

// int	main(void)
// {
// 	int	var;

// 	// var = 2147483647;
// 	// var = -1;
// 	ft_putnbr(var);
// 	return (0);
// }
