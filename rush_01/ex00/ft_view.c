/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_view.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpauwels <gpauwels@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:43:34 by gpauwels          #+#    #+#             */
/*   Updated: 2026/07/19 20:24:59 by gpauwels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_view(int *av, int left_top, int right_bottom);

int	ft_first_view(int *av, int left_top)
{
	int	i;
	int	view_l_t;

	i = 0;
	view_l_t = 0;
	while (i < 3)
	{
		if (i == 0 && av[i + 1] > av[i])
			view_l_t += 1;
		else if (i == 1 && av[i + 1] > av[i] && av[0] < av[i + 1])
			view_l_t += 1;
		else if (i == 2 && av[i + 1] > av[i] && av[0] < av[i + 1]
			&& av[1] < av[i + 1])
			view_l_t += 1;
		i++;
	}
	view_l_t += 1;
	if (view_l_t == left_top)
		return (1);
	return (0);
}

int	ft_sec_view(int *av, int right_bottom)
{
	int	i;
	int	view_r_b;

	i = 3;
	view_r_b = 0;
	while (i > 0)
	{
		if (i == 3 && av[i - 1] > av[i])
			view_r_b += 1;
		else if (i == 2 && av[i - 1] > av[i] && av[3] < av[i - 1])
			view_r_b += 1;
		else if (i == 1 && av[i - 1] > av[i] && av[3] < av[i - 1]
			&& av[2] < av[i - 1])
			view_r_b += 1;
		i--;
	}
	view_r_b += 1;
	if (view_r_b == right_bottom)
		return (1);
	return (0);
}

int	ft_view(int *av, int left_top, int right_bottom)
{
	int	first_v;
	int	last_v;

	first_v = ft_first_view(av, left_top);
	last_v = ft_sec_view(av, right_bottom);
	if (first_v == 1 && last_v == 1)
		return (1);
	else
		return (0);
}
