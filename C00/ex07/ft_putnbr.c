/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:21:42 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 16:35:28 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_positive(int number)
{
	char	buffer[11];
	int	irr;

	irr = 0;
	while (number > 0)
	{
		buffer[irr] = (number % 10) + 48;
		number = number / 10;
		irr++;
	}
	while (irr > 0)
	{
		write(1, &buffer[--irr], 1);
	}
}

void	ft_putnbr(int nb)
{
	
	int		irr;

	irr = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	write_positive(nb);
}

// int main(void){
//   ft_putnbr(-2);
//   return (0);
// }
