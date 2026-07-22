#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[10] = "abcd";
	char	s2[6] = "12345";
	int		nb;

	nb = 10;
	ft_strncat (s1, s2, nb);
	printf("main (dest): %s\n", s1);
	return (0);
}