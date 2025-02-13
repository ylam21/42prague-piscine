/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:46:24 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 10:51:09 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	irr;

	irr = 0;
	while (str[irr] != '\0')
	{
		if (!('a' <= str[irr] && str[irr] <= 'z') && (!('A' <= str[irr]
					&& str[irr] <= 'Z')))
			return (0);
		++irr;
	}
	return (1);
}

// int main(void) {
//   char *string = "2 1orld";
//   int result = ft_str_is_alpha(string);
//   printf("%d\n",result);
//   return (0);
// }
