/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:17:14 by omaly             #+#    #+#             */
/*   Updated: 2025/02/12 20:44:22 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_twodigit(int nb)
{
	int	first;
	int	second;

	first = (nb / 10) + 48;
	second = (nb % 10) + 48;
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_write(int num1, int num2)
{
	ft_twodigit(num1);
	write(1, " ", 1);
	ft_twodigit(num2);
	if (num1 != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
			{
				ft_write(i, j);
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
