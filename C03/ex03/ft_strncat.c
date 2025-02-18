/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:19:02 by omaly             #+#    #+#             */
/*   Updated: 2025/02/18 15:30:42 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = ft_len(dest);
	unsigned int j = 0;
	if (ft_len(src) == 0)
		return dest;
	while (j < nb && src[j] != '\0') {
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return dest;
}

// int	main(void)
// {
// 	char	*str1;
// 	char	str2[20] = "hello";
// 	char	*res;

// 	str1 = "gorilla";
// 	res = ft_strncat(str2, str1, 4);
// 	printf("%s\n", res);
// 	return (0);
// }
