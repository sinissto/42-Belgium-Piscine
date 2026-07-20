/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:15:54 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/19 00:55:38 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*arg_validation(int ac, int *arg_nbrs, char *av);

int	main(int argc, char **argv)
{
	int	arg_nbrs[16];
	int	i;

	arg_validation(argc, arg_nbrs, argv[1]);
	i = 0;
	printf("main() function print starts:\n");
	while (i < 16)
	{
		printf("%d, ", arg_nbrs[i]);
		i++;
	}
	printf("\n");
	printf("main() function print ends:\n");
	return (0);
}
