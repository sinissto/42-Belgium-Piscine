/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:16:43 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/23 17:26:52 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;
	int		number;

	str = "abc";
	printf("String: %s\n", str);
	number = ft_atoi(str);
	printf("Broj:   %d\n", number);
	return (0);
}

// " ---+--+1234ab567" → očekivano -1234 (primer iz subject-a)
// "1234" → očekivano 1234 (nema ni slova ni ničega posle cifara)
// "42" → očekivano 42
// "   42" → očekivano 42 (samo whitespace, bez znakova)
// "--5" → očekivano 5 (dva minusa = paran broj = pozitivno)
// "" → očekivano 0 (prazan string)
// "abc" → očekivano 0 (nema cifara uopšte)
