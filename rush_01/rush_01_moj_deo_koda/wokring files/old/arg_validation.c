int	*arg_validation(int ac, int *arg_nbrs, char *av)
{
	char	*arg_str;
	int	i;
	int	j;

	arg_str = av;
	i = 0;
	j = 0;
	if (ac != 2)
		while (arg_str[i] != '\0')
		{
			if (arg_str[i] >= '1' && arg_str[i] <= '4')
			{
				arg_nbrs[j] = arg_str[i] - 48;
				j++;
			}
			i++;
		}
	return (arg_nbrs);
}