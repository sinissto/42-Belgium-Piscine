/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 20:11:10 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/23 20:11:17 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int		nbr;
	char	*base_dec;
	char	*base_bin;
	char	*base_hex;
	char	*base_oct;

	nbr = 0;
	base_dec = "0123456789";
	base_bin = "01";
	base_hex = "0123456789ABCDEF";
	base_oct = "poneyvif";
	printf(" - Decimalna konverzija: ");
	ft_putnbr_base(0, base_dec);
	printf("\n - Binarna konverzija: ");
	ft_putnbr_base(0, "");
	printf("\n - Hex konverzija: ");
	ft_putnbr_base(42, "aab");
	printf("\n - Oct konverzija: ");
	ft_putnbr_base(-42, base_hex);
	return (0);
}
