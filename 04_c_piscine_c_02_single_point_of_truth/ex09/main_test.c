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

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	src_str[32] = "ABC dEf; XYZ-mnO 123abc DEF+gHi";
	printf("Before capitalization:\n%s\n", src_str);
	ft_strcapitalize(src_str);
	printf("After capitalization:\n%s\n", src_str);
	return (0);
}