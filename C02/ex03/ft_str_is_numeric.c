/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:52:04 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 10:53:18 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	irr;

	irr = 0;
	while (str[irr] != '\0')
	{
		if (!('0' <= str[irr] && str[irr] <= '9'))
			return (0);
		irr++;
	}
	return (1);
}

// int main(void) {
//   int res = ft_str_is_numeric("");
//   printf("%d\n",res);
//   return (0);
// }
