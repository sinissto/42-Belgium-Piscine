/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:15:54 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/18 16:10:30 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*str_to_int(int *arg_nbrs, char *av)
{
	char	*arg_str;
//	int	arg_nbrs[16];
	int	i;
	int	j;

	arg_str = av;
	i = 0;
	j = 0;
	while (arg_str[i] != '\0')
	{
		if (arg_str[i] >= '1' && arg_str[i] <= '4')
		{
			arg_nbrs[j] = arg_str[i] - 48;
			j++;
		}
		i++;
	}
	return (arg_nbrs);
}

int	main(int *ac, char **av)
{
	int	arg_nbrs[16];
	int	i;
	
	str_to_int(arg_nbrs, av[1]);
	i = 0;
	while (i < 16)
	{
		printf("%d, ", arg_nbrs[i]);
		i++;
	}
	printf("\n");
	return (0);
}
