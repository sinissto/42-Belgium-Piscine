/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:22:09 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/10 11:52:58 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptr_div;
	int	*ptr_mod;

	ptr_div = &div;
	ptr_mod = &mod;
	a = 9;
	b = 4;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("a / b = %d\n", div);
	printf("a %% b = %d\n", mod);
	return (0);
}
