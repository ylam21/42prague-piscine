/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:25:50 by omaly             #+#    #+#             */
/*   Updated: 2025/02/12 12:23:40 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_checknum(int num)
{
	int	prev;
	int	curr;

	prev = num % 10;
	num = num / 10;
	while (num > 0)
	{
		curr = num % 10;
		if (curr >= prev)
		{
			return (0);
		}
		prev = curr;
		num = num / 10;
	}
	return (1);
}

void	ft_write_nb(int num)
{
	int	tmp;
	int	bff[11];
	int	bffidx;

	bffidx = 0;
	while (num > 0)
	{
		tmp = num % 10;
		bff[bffidx++] = tmp;
		num = num / 10;
	}
	while (bffidx > 0)
	{
		tmp = bff[--bffidx] + 48;
		write(1, &tmp, 1);
	}
}

void	ft_write_nb_and_zrs(int num)
{
	ft_write_nb(num);
	if (num == 789)
	{
		write(1, "\0", 1);
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	nb;

	nb = 12;
	while (nb < 799)
	{
		if (nb < 100 && ft_checknum(nb) == 1)
		{
			write(1, "0", 1);
		}
		if (ft_checknum(nb) == 1)
		{
			ft_write_nb_and_zrs(nb);
		}
		nb++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
