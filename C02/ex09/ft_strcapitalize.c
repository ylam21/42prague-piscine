/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:03:13 by omaly             #+#    #+#             */
/*   Updated: 2025/02/13 11:58:26 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	char_is_alpha(char str)
{
	if (!('a' <= str && str <= 'z') && (!('A' <= str && str <= 'Z')))
		return (0);
	return (1);
}

int	char_is_lowercase(char str)
{
	if (!('a' <= str && str <= 'z'))
		return (0);
	return (1);
}

int	char_is_uppercase(char str)
{
	if (!('A' <= str && str <= 'Z'))
		return (0);
	return (1);
}

int	char_is_numeric(char str)
{
	if (!('0' <= str && str <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	newword;
	int	i;

	i = 0;
	newword = 1;
	while (str[i] != '\0')
	{
		if (newword == 1 && char_is_lowercase(str[i]) == 1)
		{
			str[i] -= 32;
			newword = 0;
		}
		else if (newword == 1 && char_is_numeric(str[i]) == 1)
			newword = 0;
		else if (newword == 1 && char_is_uppercase(str[i]) == 1)
			newword = 0;
		else if (char_is_alpha(str[i]) == 0 && char_is_numeric(str[i]) == 0)
			newword = 1;
		else if (newword == 0 && char_is_uppercase(str[i]) == 1)
			str[i] += 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	string[] = "salut,
// 			comment tu vas ? 42mots quarante-deux; cinquante+et+un";

// 	printf("%s", ft_strcapitalize(string));
// 	return (0);
// }
