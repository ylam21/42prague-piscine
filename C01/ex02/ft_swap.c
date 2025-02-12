/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:51:16 by omaly             #+#    #+#             */
/*   Updated: 2025/02/06 17:27:31 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tempa;

	tempa = *a;
	*a = *b;
	*b = tempa;
}
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*ptrA;
// 	int	*ptrB;

// 	a = 5;
// 	b = 7;
// 	ptrA = &a;
// 	ptrB = &b;
// 	printf("1.A:%d\n", a);
// 	printf("1.B:%d\n", b);
// 	ft_swap(ptrA, ptrB);
// 	printf("2.A:%d\n", a);
// 	printf("2.B:%d\n", b);
// 			return (0);
// }
