/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:44:51 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/24 10:45:07 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

void	conver_base_to_nbr(char *str, int base_nbr, char *base)
{
	int	i;
	int	j;
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != base[j] && base[j] != '\0')
		{
			result = result * base_nbr + (str[i] + '0');
			j++;
		}
		i++;
	}
	printf("*******************************\n");
	printf("konverzija.c\n");
	printf("String: %s\n", str);
	printf("Base: %s\n", base);
	printf("Base nbr: %d\n", base_nbr);
	printf("Result: %d\n", result);
	printf("*******************************\n");

	// int	mod;

	// if (nbr < 0)
	// {
	// 	write(1, "-", 1);
	// 	convert_nbr_to_base(-(nbr / base_nbr), base_nbr, base);
	// 	mod = -(nbr % base_nbr);
	// 	write(1, &base[mod], 1);
	// 	return ;
	// }
	// if (nbr == 0)
	// 	return ;
	// mod = nbr % base_nbr;
	// nbr /= base_nbr;
	// convert_nbr_to_base(nbr, base_nbr, base);
	// write(1, &base[mod], 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_nbr;

	base_nbr = is_base_valid(base);
	if (base_nbr > 0)
		conver_base_to_nbr(str, base_nbr, base);
	printf("*******************************\n");
	printf("main_05.c\n");
	printf("Str:  %s\n", str);
	printf("Base: %s\n", base);
	printf("Base nbr: %d\n", base_nbr);
	printf("*******************************\n");

	return (999);
}
