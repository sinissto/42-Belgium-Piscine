/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:56:50 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/20 15:21:35 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*src_str;

	src_str = "dcvv4zxcv";
	printf("Vravena vrednost iz funkcije: %d\n", ft_str_is_alpha(src_str));
	return (0);
}
