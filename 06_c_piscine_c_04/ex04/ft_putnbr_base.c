/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 20:10:49 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/24 10:22:10 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' )
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 1)
		return (0);
	return (i);
}

void	convert_nbr_to_base(int nbr, int base_nbr, char *base)
{
	int	mod;

	if (nbr < 0)
	{
		write(1, "-", 1);
		convert_nbr_to_base(-(nbr / base_nbr), base_nbr, base);
		mod = -(nbr % base_nbr);
		write(1, &base[mod], 1);
		return ;
	}
	if (nbr == 0)
		return ;
	mod = nbr % base_nbr;
	nbr /= base_nbr;
	convert_nbr_to_base(nbr, base_nbr, base);
	write(1, &base[mod], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_nbr;

	base_nbr = is_base_valid(base);
	if (base_nbr > 0)
		convert_nbr_to_base(nbr, base_nbr, base);
	if (base_nbr > 0 && nbr == 0)
		write(1, &base[0], 1);
}
