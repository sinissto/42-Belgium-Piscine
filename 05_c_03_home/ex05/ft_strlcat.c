/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:58:58 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/23 01:39:14 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	total_chars;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	total_chars = i + j;
	if (i >= size)
		return (total_chars);
	j = 0;
	while (dest_len < size - 1 && src[j] != '\0')
	{
		dest[dest_len] = src[j];
		j++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (total_chars);
}
