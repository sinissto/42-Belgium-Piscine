/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:58:58 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/22 23:59:02 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// unsigned int str_len(char *str)
// {

// }

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	dest_len;
	unsigned int	dest_len_temp;
	unsigned int	src_len;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len_temp = i;
	dest_len = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	src_len = j;
	if (dest_len >= size)
		return (dest_len + src_len);
	j = 0;
	while (dest_len_temp < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		dest_len_temp++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
