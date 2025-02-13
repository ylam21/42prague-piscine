/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:59:38 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 11:02:30 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	irr;

	irr = 0;
	while (str[irr] != '\0')
	{
		if ('A' <= str[irr] && str[irr] <= 'Z')
			str[irr] += 32;
		irr++;
	}
	return (str);
}

// int main(void)
// {
// 	char res[] = "SHOULD BE LOWERCASE!";
// 	ft_strlowcase(res);
// 	printf("%s\n", res);
// 	return (0);
// }
