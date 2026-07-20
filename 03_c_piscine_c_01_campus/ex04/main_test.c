/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 12:04:04 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/10 12:10:04 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;
	
	ptr_a = &a;
	ptr_b = &b;
	a = 9;
	b = 2;
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("a: %d\n", *ptr_a);
	printf("b: %d\n", *ptr_b);
	return (0);
}
