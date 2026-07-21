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
	unsigned long address;
	// get address number
	address = (unsigned long) addr;
	if (size > 0)	
		printf("%ld", address);
	//convert address number to hex 16 chars long
	
	
	//print ": "
	// convert string to the his hex values
	//print string's hex values by two chars toggether
	//print string as it is if it is possible, if not print "."
	addr = (void *) address;
	return (addr);
}
