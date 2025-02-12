/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:09:24 by omaly             #+#    #+#             */
/*   Updated: 2025/02/06 17:27:37 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 - (temp2 * (temp1 / temp2));
}

// int	main(void)
// {
// 	int	var1;
// 	int	var2;
// 	int	*a;
// 	int	*b;

// 	var1 = 50;
// 	var2 = 20;
// 	a = &var1;
// 	b = &var2;
// 	ft_ultimate_div_mod(a, b);
// 	printf("var1: %d, var2: %d", var1, var2);
// 	return (0);
// }
