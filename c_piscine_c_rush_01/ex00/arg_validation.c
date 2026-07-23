/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpauwels <gpauwels@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:42:48 by gpauwels          #+#    #+#             */
/*   Updated: 2026/07/19 20:23:22 by gpauwels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	is_char_digit(char c)
{
	if (c >= '1' && c <= ('0' + 4))
		return (1);
	return (0);
}

int	is_char_space(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	find_num_of_arg_digits(char *arg_str)
{
	int	i;
	int	num_of_digits;
	int	is_digit;

	i = 0;
	num_of_digits = 0;
	is_digit = 1;
	while (arg_str[i] != '\0')
	{
		if (is_digit == 1)
		{
			if (is_char_digit(arg_str[i]) == 0)
				return (-1);
			num_of_digits++;
		}
		else if (is_char_space(arg_str[i]) == 0)
			return (-1);
		is_digit = 1 - is_digit;
		i++;
	}
	if (is_digit == 1)
		return (-1);
	return (num_of_digits);
}

int	validate_arg_str(char *arg_input)
{
	int	num_of_digits;

	if (arg_input == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	num_of_digits = find_num_of_arg_digits(arg_input);
	if (num_of_digits != 16)
		return (0);
	return (1);
}

int	arg_validation(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (validate_arg_str(av[1]) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
