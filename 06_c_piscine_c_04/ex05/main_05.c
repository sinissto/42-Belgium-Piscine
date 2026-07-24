/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:45:19 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/24 10:45:22 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int	main(void)
{
	int		nbr;
	char	*str;
	char	*base_dec;
	char	*base_bin;
	char	*base_hex;
	char	*base_oct;

	str = "1010";
	base_dec = "0123456789";
	base_bin = "01";
	base_hex = "0123456789ABCDEF";
	base_oct = "poneyvif";
	// printf("Decimalna konverzija: ");
	nbr = ft_atoi_base(str, base_bin);
	// printf("\nBinarna konverzija: ");
	// ft_atoi_base(0, "");
	// printf("\nHex konverzija: ");
	// ft_atoi_base(42, "aab");
	// printf("\nOct konverzija: ");
	// ft_atoi_base(-42, base_hex);
	// printf("Vracen broj: %d\n", nbr);
	return (0);
}
