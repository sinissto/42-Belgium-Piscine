/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstojano <sstojano@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:11:23 by sstojano          #+#    #+#             */
/*   Updated: 2026/07/19 17:11:51 by sstojano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	is_not_letter(char c, int *cap_flag)
{
	if (((32 <= c && c <= 47) || (58 <= c && c <= 64)
			|| (91 <= c && c <= 96)
			|| (123 <= c && c <= 126)))
		*cap_flag = 1;
	if (48 <= c && c <= 57)
		*cap_flag = 0;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_flag;

	capitalize_flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		is_not_letter(str[i], &capitalize_flag);
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z'))
		{
			if (capitalize_flag == 1 && ('A' <= str[i] && str[i] <= 'Z'))
				capitalize_flag = 0;
			else if (capitalize_flag == 0 && ('A' <= str[i] && str[i] <= 'Z'))
				str[i] += 32;
			else if (capitalize_flag == 1 && ('a' <= str[i] && str[i] <= 'z'))
			{
				str[i] -= 32;
				capitalize_flag = 0;
			}
		}
		i++;
	}
	return (str);
}
