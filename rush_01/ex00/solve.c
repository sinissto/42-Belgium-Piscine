/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpauwels <gpauwels@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:39:38 by gpauwels          #+#    #+#             */
/*   Updated: 2026/07/19 20:26:59 by gpauwels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int grid[4][4], int views[16], int r);
int	check_col(int grid[4][4], int views[16], int c);

void	init_grid(int grid[4][4])
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			grid[r][c] = 0;
			c++;
		}
		r++;
	}
}

int	is_free(int grid[4][4], int r, int c, int v)
{
	int	i;

	i = 0;
	while (i < r)
	{
		if (grid[i][c] == v)
			return (0);
		i++;
	}
	i = 0;
	while (i < c)
	{
		if (grid[r][i] == v)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int grid[4][4], int views[16], int pos)
{
	int	r;
	int	c;
	int	v;

	if (pos == 16)
		return (1);
	r = pos / 4;
	c = pos % 4;
	v = 0;
	while (++v <= 4)
	{
		if (is_free(grid, r, c, v))
		{
			grid[r][c] = v;
			if ((c != 3 || check_row(grid, views, r))
				&& (r != 3 || check_col(grid, views, c))
				&& solve(grid, views, pos + 1))
				return (1);
		}
	}
	grid[r][c] = 0;
	return (0);
}
