#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[10] = "abcd";
	char	s2[6] = "bc";
	
	ft_strstr (s1, s2);
	printf("main (dest): %s\n", s1);
	return (0);
}