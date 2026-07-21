/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:12:37 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/19 17:12:40 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	unsigned long address;
	char	hex_address[17];
	// get address number
	address = (unsigned long) addr;
	if (size > 0)	
		printf("%ld\n\n\n", address);
	//convert address number to hex 16 chars long and fill with zeros from start
	printf("Int address: %ld\n", address);
	i = 0;
	while (address > 0)
	{
		int remain;
		
		remain = address % 16;
		if(remain < 10)
			hex_address[i] = '0' + remain;
		else
			hex_address[i] = ('a' + remain - 10);
		address /= 16;
		i++;
	}
	printf("Int address: %ld\n", address);
	printf("Hex address: ");
	while (i--)
	{
		printf("%c", hex_address[i]);
	}
	
	
	//print ": "
	// convert string to the his hex values
	//print string's hex values by two chars toggether
	//print string as it is if it is possible, if not print "."
	addr = (void *) address;
	return (addr);
}
