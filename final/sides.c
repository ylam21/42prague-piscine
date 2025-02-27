/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sides.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:04:49 by jakrajic          #+#    #+#             */
/*   Updated: 2025/02/16 23:08:38 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_willsee(int array[4])
{
	int	points;
	int	max;
	int	i;

	points = 1;
	max = array[0];
	i = 1;
	while (i < 4)
	{
		if (array[i] > max)
		{
			max = array[i];
			points++;
		}
		i++;
	}
	return (points);
}

int	ft_row_left(int grid[4][4], int row_left[4])
{
	int	buffer[4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			buffer[j] = grid[i][j];
			j++;
		}
		if (ft_willsee(buffer) != row_left[i])
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

int	ft_row_right(int grid[4][4], int row_right[4])
{
	int	buffer[4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			buffer[j] = grid[i][3 - j];
			j++;
		}
		if (ft_willsee(buffer) != row_right[i])
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

int	ft_column_up(int grid[4][4], int column_up[4])
{
	int	buffer[4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			buffer[i] = grid[i][j];
			i++;
		}
		if (ft_willsee(buffer) != column_up[j])
			return (0);
		i = 0;
		j++;
	}
	return (1);
}

int	ft_column_down(int grid[4][4], int column_down[4])
{
	int	buffer[4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			buffer[i] = grid[3 - i][j];
			i++;
		}
		if (ft_willsee(buffer) != column_down[j])
			return (0);
		i = 0;
		j++;
	}
	return (1);
}
