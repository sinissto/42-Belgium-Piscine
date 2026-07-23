#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*s1;
	// char	*s2;
	char	*to_find;
	char	*result;

	s1 = "a";
	to_find = "xyz";

	result = ft_strstr(s1, to_find);
	if (result == NULL)
		printf("NULL");
	else
		printf("%s\n", result);
	return (0);
}