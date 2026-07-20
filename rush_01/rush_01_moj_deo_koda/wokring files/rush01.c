/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 13:42:11 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/19 10:33:05 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	arg_validation(int ac, char **av);
void	parse_arg_str_to_int_arr(char *arg_input, int *arg_nbrs);

int	main(int argc, char **argv)
{
	int	arg_nbrs[16];
	int	i;

	// argument validation check
	if (arg_validation(argc, argv) == 0)
		return (0);
	// parsing string argument to int array
	parse_arg_str_to_int_arr(argv[1], arg_nbrs);
	i = 0;
	printf("main() function print starts:\n");
	while (i < 16)
	{
		printf("%d ", arg_nbrs[i]);
		i++;
	}
	printf("\n");
	printf("main() function print ends:\n");
	return (0);
}
