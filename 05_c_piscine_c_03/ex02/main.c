#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[10] = "abc";
	char	s2[4] = "def";

	ft_strcat (s1, s2);
	printf("main (dest): %s\n", s1);
	return (0);
}