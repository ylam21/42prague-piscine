/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:04:49 by omaly             #+#    #+#             */
/*   Updated: 2025/02/18 17:01:24 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <stdio.h>

	unsigned int	ft_len(char *str)
	{
		unsigned int	len;

		len = 0;
		while (str[len] != '\0')
			len++;
		return (len);
	}

	unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
	{
		unsigned int	i;
		unsigned int	j;
		unsigned int	src_len;
		unsigned int	dest_len;

		src_len = ft_len(src);
		dest_len = ft_len(dest);
		i = dest_len;
		j = 0;
		if (dest_len >= size)
			return (src_len + size);
		while (i < size - 1 && src[j] != '\0')
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (src_len + dest_len);
	}

// int	main(void)
// {
// 	char			src[] = " World!";
// 	unsigned int	result;

// 	char dest[20] = "Hello";
// 	result = ft_strlcat(dest, src, sizeof(dest));
// 	printf("Resulting string: %s\n", dest);
// 	return (0);
// }
