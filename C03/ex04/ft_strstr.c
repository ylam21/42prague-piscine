/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:31:36 by omaly             #+#    #+#             */
/*   Updated: 2025/02/18 16:04:13 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find) {
	int i = 0;
	int j = 0;
	int fail;
	if (to_find[0] == '\0')
		return str;
	while (str[i] != '\0') {
		if (str[i] == to_find[0]) {
			while (to_find[j] != '\0') {
				if (to_find[j] != str[i+j]) {
					fail = 1;
					break;
				}
				j++;
			}
			if (fail != 1)
				return &str[i];
		}
		i++;
	}
	return 0;
}

// int main(void) {
// 	char *str = "ThisKolotocIsLong";
// 	char *sub = "Kole";
// 	char *res = ft_strstr(str,sub);
// 	printf("Result: %s\n",res);
// 	return 0;
// }
