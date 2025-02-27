/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:04:49 by jakrajic          #+#    #+#             */
/*   Updated: 2025/02/16 23:08:54 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_error_check1(char	*input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if (!((input[i] >= '1' && input[i] <= '4') || (input[i] == ' ')))
		{
			return (1);
		}
		if (input[i] >= '1' && input[i] <= '4')
		{
			if (input[i + 1] != ' ' && input[i + 1] != '\0')
				return (1);
		}
		i++;
	}
	return (0);
}
