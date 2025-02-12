/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:26:52 by omaly             #+#    #+#             */
/*   Updated: 2025/02/06 17:33:13 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		++counter;
	}
	return (counter);
}

// int	main(void)
// {
// 	char	*var;

// 	var = "hello ";
// 	ft_strlen(var);
// 	return (0);
// }
