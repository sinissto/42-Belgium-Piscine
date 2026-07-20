/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 08:56:27 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/10 09:38:10 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int*nbr);

int	main(void)
{
	int	number;
	int	*ptr_number;

	ptr_number = &number;
	ft_ft(ptr_number);
	write(1, &number, 2);
	ft_ft(NULL);
	return (0);
}
