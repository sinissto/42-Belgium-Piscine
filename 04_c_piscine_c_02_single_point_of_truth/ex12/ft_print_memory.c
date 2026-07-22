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

#include <unistd.h>

void	fill_first_zeros(char *hex_address, char *temp_hex, int count)
{
	int	i;

	i = 0;
	while (i < 16 - count)
	{
		hex_address[i] = '0';
		i++;
	}
	while (count > 0)
	{
		count--;
		hex_address[i] = temp_hex[count];
		i++;
	}
}

// funkcija za dobijanje hex adrese
void	get_hex_address(char *hex_address, void *addr)
{
	int				i;
	unsigned long	address;
	int				count;
	char			temp_hex[17];
	int				remain;

	address = (unsigned long) addr;
	i = 0;
	while (address > 0)
	{
		remain = address % 16;
		if (remain < 10)
			temp_hex[i] = '0' + remain;
		else
			temp_hex[i] = 'a' + (remain - 10);
		address /= 16;
		i++;
	}
	count = i;
	fill_first_zeros(hex_address, temp_hex, count);
	hex_address[16] = '\0';
}

void	print_nibble(int nibble)
{
	char	c;

	if (nibble < 10)
		c = '0' + nibble;
	else
		c = 'a' + (nibble - 10);
	write(1, &c, 1);
}

// funkcija za fobijanje hex stringa
void	get_hex_bytes(char *str, unsigned int size)
{
	unsigned int	i;
	unsigned char	char_byte;
	int				high_nibble;
	int				low_nibble;
	char			c;

	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			char_byte = (unsigned char) str[i];
			print_nibble(char_byte / 16);
			print_nibble(char_byte % 16);
		}
		else
			write(1, "  ", 2);
		if ((i + 1) % 2 == 0)
		{
			c = ' ';
			write(1, &c, 1);
		}
		i++;
	}
}

// funkcija za ispis text stringa

void	get_ascii_part(char *str, unsigned int size)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			c = str[i];
		else
			c = '.';
		write(1, &c, 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			hex_address[17];
	char			*str;
	unsigned int	offset;
	unsigned int	line_size;
	char			*next_start;

	str = (char *) addr;
	offset = 0;
	while (offset < size)
	{
		line_size = size - offset;
		if (line_size > 16)
			line_size = 16;
		next_start = str + offset;
		get_hex_address(hex_address, (void *)(next_start));
		write(1, hex_address, 16);
		write(1, ": ", 2);
		get_hex_bytes(next_start, line_size);
		write(1, " ", 1);
		get_ascii_part(next_start, line_size);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}
