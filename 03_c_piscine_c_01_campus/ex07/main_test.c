/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 00:32:35 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/16 12:54:45 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int		int_arr[6];
	int		int_arr_len;

	int_arr[0] = 10;
	int_arr[1] = 20;
	int_arr[2] = 30;
	int_arr[3] = 40;
	int_arr[4] = 50;
	int_arr_len = 5;
	ft_rev_int_tab(int_arr, int_arr_len);
	return (0);
}
