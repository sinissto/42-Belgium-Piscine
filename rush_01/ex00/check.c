/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpauwels <gpauwels@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:39:23 by gpauwels          #+#    #+#             */
/*   Updated: 2026/07/19 20:23:45 by gpauwels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_view(int *av, int left_top, int right_bottom);

int	check_row(int grid[4][4], int views[16], int r)
{
	int	av[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		av[i] = grid[r][i];
		i++;
	}
	return (ft_view(av, views[8 + r], views[12 + r]));
}

int	check_col(int grid[4][4], int views[16], int c)
{
	int	av[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		av[i] = grid[i][c];
		i++;
	}
	return (ft_view(av, views[0 + c], views[4 + c]));
}
