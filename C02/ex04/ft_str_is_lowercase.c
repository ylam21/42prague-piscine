/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:54:30 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 10:54:35 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	irr;

	irr = 0;
	while (str[irr] != '\0')
	{
		if (!('a' <= str[irr] && str[irr] <= 'z'))
			return (0);
		irr++;
	}
	return (1);
}

// int main(void) {
//   int res = ft_str_is_lowercase("oA");
//   printf("%d\n",res);
//   return (0);
// }
