/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 23:35:54 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/20 23:36:01 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	src_str[24] = "UPPER, lower, 56\%! &";
	ft_strlowcase(src_str);
	printf("%s\n", src_str);
	return (0);
}