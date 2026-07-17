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

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src_str[30];
	char	dest_str[30];

	src_str = "This is test string";
	ft_strcpy(dest_str, src_str);
}
