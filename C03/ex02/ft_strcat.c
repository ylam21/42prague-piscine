/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:46:42 by omaly             #+#    #+#             */
/*   Updated: 2025/02/18 15:15:33 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	start;
	int	i;

	if (str_len(src) == 0)
		return (dest);
	start = str_len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	str2[10] = "hello";
// 	char	*res;

// 	str1 = "ok";
// 	res = ft_strcat(str2, str1);
// 	printf("%s\n", res);
// 	return (0);
// }
