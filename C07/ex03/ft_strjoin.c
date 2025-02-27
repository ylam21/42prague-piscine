/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:24:36 by omaly             #+#    #+#             */
/*   Updated: 2025/02/25 14:26:45 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_len(int size, char **strs, char *sep)
{
	int	sep_len;
	int	len_acc;
	int	i;

	sep_len = get_len(sep);
	len_acc = 0;
	i = 0;
	while (i < size)
		len_acc += get_len(strs[i++]);
	return (len_acc + (sep_len * (size - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		j;
	int		index;

	if (size == 0)
		return (malloc(0));
	index = 0;
	join = (char *)malloc(sizeof(char) * (total_len(size, strs, sep) + 1));
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			join[index++] = strs[i][j++];
		if (i != (size - 1))
		{
			j = 0;
			while (sep[j])
				join[index++] = sep[j++];
		}
		i++;
	}
	join[index] = '\0';
	return (join);
}

// int	main(void)
// {
// 	char	*strarr[] = {"Fik", "from", "Colorado", NULL};
// 	char	**dpr;
// 	char	*sep;
// 	char	*res;

// 	dpr = strarr;
// 	sep = "X";
// 	res = ft_strjoin(3, dpr, sep);
// 	printf("%s", res);
// 	return (0);
// }
