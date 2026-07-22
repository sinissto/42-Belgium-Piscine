/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:12:15 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/22 11:16:06 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_hex(char *hex, int high_nibble, int low_nibble)
{
	hex[0] = '\\';
	if ((0 <= high_nibble && high_nibble <= 9))
		hex[1] = '0' + high_nibble;
	else
		hex[1] = 'a' + high_nibble - 10;
	if (0 <= low_nibble && low_nibble <= 9)
		hex[2] = '0' + low_nibble;
	else
		hex[2] = 'a' + low_nibble - 10;
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		high_nibble;
	int		low_nibble;
	char	hex[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			high_nibble = str[i] / 16;
			low_nibble = str[i] % 16;
			get_hex(hex, high_nibble, low_nibble);
			write(1, &hex, 3);
		}
		i++;
	}
}
