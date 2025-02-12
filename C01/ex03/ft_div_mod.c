/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:23:38 by omaly             #+#    #+#             */
/*   Updated: 2025/02/06 18:59:07 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a - (b * (a / b));
}

// int	main(void)
// {
// 	int	*div;
// 	int	*mod;
// 	int	a;
// 	int	b;
// 	int	c;
// 	int	d;
// // 'a' and 'b' need to be declared.
// 	div = &c;
// 	mod = &d;

// 	ft_div_mod(a, b, div, mod);
// 	return (0);
// }
