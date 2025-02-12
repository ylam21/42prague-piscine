/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:17:35 by omaly             #+#    #+#             */
/*   Updated: 2025/02/07 11:30:48 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	irr;
	int	tmp;

	counter = 0;
	irr = size - 1;
	while (counter < (((size - 1) / 2) + ((size - 1) % (2))))
	{
		tmp = tab[counter];
		tab[counter] = tab[irr];
		tab[irr] = tmp;
		++counter;
		--irr;
	}
}

// int	main(void)
// {

// 	int	arr[8] = {6,2,3,4,5,6,7,7};

// 	ft_rev_int_tab(arr, 8);
// 	for (int i = 0; i < 8; i++)
// 	{
// 	}
// 	return (0);
// }
