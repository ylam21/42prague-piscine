/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:04:49 by jakrajic          #+#    #+#             */
/*   Updated: 2025/02/16 23:32:05 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_row_left(int grid[4][4], int row_left[4]);
int		ft_row_right(int grid[4][4], int row_right[4]);
int		ft_column_up(int grid[4][4], int column_up[4]);
int		ft_column_down(int grid[4][4], int column_down[4]);

void	get_part(char *source, int *target, int part)
{
	int	i;
	int	j;
	int	start;

	start = 8 * (part - 1);
	i = 0;
	j = 0;
	while (j < 4 && source[start + i] != '\0')
	{
		if ('0' <= source[start + i] && source[start + i] <= '9')
		{
			target[j++] = source[start + i] - '0';
		}
		i++;
	}
}

int	ft_start(int grid[4][4], char *str)
{
	int	column_up[4];
	int	column_down[4];
	int	row_left[4];
	int	row_right[4];

	get_part(str, column_up, 1);
	get_part(str, column_down, 2);
	get_part(str, row_left, 3);
	get_part(str, row_right, 4);
	if (ft_row_left(grid, row_left) == 1 && ft_row_right(grid, row_right) == 1)
	{
		if (ft_column_up(grid, column_up) == 1 && ft_column_down(grid,
				column_down) == 1)
			return (1);
	}
	return (0);
}

int	ft_possible(int grid[4][4], int row, int column, int number)
{
	int	i;

	i = 0;
	while (i < column)
	{
		if (grid[row][i] == number)
			return (0);
		i++;
	}
	i = 0;
	while (i < row)
	{
		if (grid[i][column] == number)
			return (0);
		i++;
	}
	return (1);
}

int	ft_recursion(int grid[4][4], int row, int column, char *str)
{
	int	i;

	if (row == 4)
		return (ft_start(grid, str));
	i = 1;
	while (i <= 4)
	{
		if (ft_possible(grid, row, column, i))
		{
			grid[row][column] = i;
			if (ft_recursion(grid, row + (column == 3), (column + 1) % 4, str))
				return (1);
			grid[row][column] = 0;
		}
		i++;
	}
	return (0);
}
