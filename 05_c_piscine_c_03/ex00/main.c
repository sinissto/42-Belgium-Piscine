#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;
	int	res;

	s1 = "";
	s2 = "";
	res = ft_strcmp (s1, s2);
	printf("%d", res);
	return (0);
}