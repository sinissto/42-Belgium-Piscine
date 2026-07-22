char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*to_find;

	s1 = "fdgfdsabdfsfs";
	to_find = "ab";

	ft_strstr(s1, to_find);
	return (0);
}