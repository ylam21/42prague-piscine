/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:57:52 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 10:58:57 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	irr;

	irr = 0;
	while (str[irr] != '\0')
	{
		if ('a' <= str[irr] && str[irr] <= 'z')
			str[irr] -= 32;
		++irr;
	}
	return (str);
}

// int	main(void)
// {
// 	char	res[] = "this should be uppercase!";

// 	ft_strupcase(res);
// 	printf("%s\n", res);
// 	return (0);
// }
