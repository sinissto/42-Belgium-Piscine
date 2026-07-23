#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[30] = "x";
	char			dest[30] = "ab";
	unsigned int	result;
	unsigned int	size;

	size = 0;
	printf("Dest befor: %s\n", dest);
	result = ft_strlcat(dest, src, size);
	printf("Result: %d\n", result);
	printf("Dest after: %s\n", dest);
	return (0);
}