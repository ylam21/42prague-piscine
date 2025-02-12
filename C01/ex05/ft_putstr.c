/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:25:25 by omaly             #+#    #+#             */
/*   Updated: 2025/02/06 19:05:18 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		write(1, &str[temp], 1);
		++temp;
	}
}

// int	main(void)
// {
// 	char	*string;

// 	string = "Hello World";
// 	ft_putstr(string);
// 	return (0);
// }
