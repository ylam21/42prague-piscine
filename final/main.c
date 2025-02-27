/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:04:49 by jakrajic          #+#    #+#             */
/*   Updated: 2025/02/16 23:08:48 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int grid[4][4]);
int		ft_recursion(int grid[4][4], int row, int column, char *str);
int		ft_error_check1(char	*input);

int	main(int argc, char	*argv[])
{
	int	j;
	int	grid[4][4];

	j = 0;
	if (argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}
	else if (ft_error_check1(argv[1]) == 1)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (2);
	}
	if (ft_recursion(grid, 0, 0, argv[1]))
		ft_print(grid);
	else
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
	return (0);
}
