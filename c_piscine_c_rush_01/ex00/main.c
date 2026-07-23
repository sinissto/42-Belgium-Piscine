/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpauwels <gpauwels@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:38:56 by gpauwels          #+#    #+#             */
/*   Updated: 2026/07/19 20:25:42 by gpauwels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		arg_validation(int ac, char **av);
void	parse_arg_str_to_int_arr(char *arg_input, int *arg_nbrs);
void	init_grid(int grid[4][4]);
int		solve(int grid[4][4], int views[16], int pos);
void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	views[16];
	int	grid[4][4];

	if (!arg_validation(argc, argv))
		return (1);
	parse_arg_str_to_int_arr(argv[1], views);
	init_grid(grid);
	if (solve(grid, views, 0))
		print_grid(grid);
	else
		ft_putstr("Error\n");
	return (0);
}
