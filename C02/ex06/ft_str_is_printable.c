/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:56:17 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 14:38:33 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	irr;

	irr = 0;
	while (str[irr] != '\0')
	{
		if (!( 32<= str[irr] && str[irr] <= 126))
			return (0);
		irr++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	res;

// 	res = ft_str_is_printable("AAAAAAADDDDD");
// 	printf("%d\n", res);
// 	return (0);
// }
