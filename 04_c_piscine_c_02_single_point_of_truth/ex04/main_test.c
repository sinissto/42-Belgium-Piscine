/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:08:56 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/20 15:39:06 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*src_str;

	src_str = "";
	printf("Returned val: %d\n", ft_str_is_lowercase(src_str));
	return (0);
}
