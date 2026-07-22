#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	int	n;
	int	res;

	n = 10;
	s1 = "abc";
	s2 = "abc";
	res = ft_strncmp (s1, s2, n);
	printf("%d", res);
	return (0);
}