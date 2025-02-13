/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:55:44 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 10:56:06 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	irr;

	irr = 0;
	while (str[irr] != '\0')
	{
		if (!('A' <= str[irr] && str[irr] <= 'Z'))
			return (0);
		irr++;
	}
	return (1);
}

// int main(void) {
//   int res = ft_str_is_uppercase("AAAAAAADDDDD");
//   printf("%d\n",res);
//   return (0);
// }
