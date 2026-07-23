/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:41:52 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/23 12:41:57 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
long	check_negative_numbers(int nb);
void	print_number(int nb_nbr_of_digicts, char *nb_string);

void	ft_putnbr(int nb)
{
	char	nb_string[10];
	int		nbr_of_digicts;
	long	nb_abs;

	nbr_of_digicts = 0;
	nb_abs = check_negative_numbers(nb);
	while (nb_abs > 0)
	{
		nb_string[nbr_of_digicts] = (nb_abs % 10) + '0';
		nb_abs /= 10;
		nbr_of_digicts++;
	}
	print_number(nbr_of_digicts, nb_string);
}

long	check_negative_numbers(int nb)
{
	long	nb_long;

	nb_long = nb;
	if (nb_long == 0)
	{
		write(1, "0", 1);
	}
	if (nb_long < 0)
	{
		write(1, "-", 1);
		nb_long = -nb_long;
	}
	return (nb_long);
}

void	print_number(int nb_nbr_of_digicts, char *nb_string)
{
	while (nb_nbr_of_digicts > 0)
	{
		nb_nbr_of_digicts--;
		write(1, &nb_string[nb_nbr_of_digicts], 1);
	}
}
