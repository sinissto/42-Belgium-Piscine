/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 10:58:10 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/10 11:06:14 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{	
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;
	
	a = 4;
	b = 9;
	ptr_a = &a;
	ptr_b = &b;
	printf("A value before: %d\n", a);
	printf("B value before: %d\n", b);
	ft_swap(ptr_a, ptr_b);
	printf("A value after: %d\n", a);
	printf("B value after: %d\n", b);
	return (0);
}
