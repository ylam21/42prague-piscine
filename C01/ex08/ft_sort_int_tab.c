/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:30:37 by omaly             #+#    #+#             */
/*   Updated: 2025/02/12 17:06:12 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			++j;
		}
		++i;
	}
}

// int	main(void)
// {
// 	int	arr[5] = {4,3,2,1,0};

// 	ft_sort_int_tab(arr, 5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("arr: %d\n", arr[i]);
// 	}
// 	return (0);
// }
