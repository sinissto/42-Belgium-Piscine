/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:31:54 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/16 18:54:42 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		k = 0;
		while (k < size - 1)
		{
			if (tab[k] > tab[k + 1])
			{
				temp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = temp;
			}
			k++;
		}
		i++;
	}
}
