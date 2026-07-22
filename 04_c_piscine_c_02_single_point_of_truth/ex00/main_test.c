/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:20:54 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/17 12:20:57 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src_str;
	char	dest_str[30];

	src_str = "This is test string";
	printf("Before: %s\n", src_str);
	ft_strcpy(dest_str, src_str);
	printf("After : %s\n", dest_str);
	return (0);
}
