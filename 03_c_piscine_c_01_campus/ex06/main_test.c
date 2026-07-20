/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 23:52:57 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/16 00:22:19 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		str_len;

	str = "Sinisa Stojanovic";
	str_len = ft_strlen(str);
	printf("%d", str_len);
}
