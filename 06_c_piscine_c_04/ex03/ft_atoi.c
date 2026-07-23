/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:04:23 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/23 15:04:27 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	result;

	result = 0;
	minus_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			if (str[i] == '-')
				minus_count++;
		if ('0' <= str[i] && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			break;
		i++;
	}
	if (minus_count % 2 == 0)
		return (result);
	return (-result);
}
