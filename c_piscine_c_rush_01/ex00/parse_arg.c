/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpauwels <gpauwels@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:43:12 by gpauwels          #+#    #+#             */
/*   Updated: 2026/07/19 20:26:11 by gpauwels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_digit(char c);

int	arg_char_nbr_to_int(char c)
{
	return (c - 48);
}

void	parse_arg_str_to_int_arr(char *arg_input, int *arg_nbrs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg_input[i] != '\0')
	{
		if (is_char_digit(arg_input[i]) == 1)
		{
			arg_nbrs[j] = arg_char_nbr_to_int(arg_input[i]);
			j++;
		}
		i++;
	}
}
