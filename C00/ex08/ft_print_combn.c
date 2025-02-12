/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:44:06 by omaly             #+#    #+#             */
/*   Updated: 2025/02/12 20:12:41 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_pow10(int num)
{
	int	counter;
	int	in;

	counter = 0;
	in = 1;
	while (counter < num)
	{
		in = in * 10;
		counter++;
	}
	return (in);
}

int	ft_isinc(int num)
{
	int	prev;
	int	curr;

	if (num < 10)
	{
		return (1);
	}
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

int	ft_get_bound(int n, int lower)
{
	int	count;
	int	acc;

	acc = 0;
	count = 0;
	while (count < n)
	{
		if (lower)
			acc += count * ft_pow10(n - (count + 1));
		else
			acc += (9 - count) * ft_pow10(count);
		count++;
	}
	return (acc);
}

void	ft_putnbr(int nb, int n)
{
	int	tmp;
	int	bff[11];
	int	bffidx;
	int	catch;

	catch = nb;
	bffidx = 0;
	if (catch == ft_get_bound(n, 1) || catch < ft_pow10(n - 1))
		write(1, "0", 1);
	while (nb > 0)
	{
		tmp = nb % 10;
		bff[bffidx++] = tmp;
		nb = nb / 10;
	}
	while (bffidx > 0 && catch > 0)
	{
		tmp = bff[--bffidx] + 48;
		write(1, &tmp, 1);
	}
	if (catch != ft_get_bound(n, 0))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_combn(int n)
{
	int	start;
	int	end;

	start = ft_get_bound(n, 1);
	end = ft_get_bound(n, 0);
	while (start <= end)
	{
		if (ft_isinc(start) == 1)
		{
			ft_putnbr(start, n);
		}
		start++;
	}
}

// int	main(void)
// {
// 	int	var;

// 	var = 3;
// 	ft_print_combn(var);
// 	return (0);
// }
