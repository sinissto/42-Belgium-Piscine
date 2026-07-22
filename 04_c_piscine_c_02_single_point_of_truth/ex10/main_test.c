#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src_str;
	char	dest_str[5];
	unsigned int	num_of_chars;

	src_str = "1234567890";
	printf("Before strlcpy: %s\n", src_str);
	num_of_chars = ft_strlcpy(dest_str, src_str, 5);
	printf("After strlcpy: %s\n", dest_str);
	printf("Number of chars: %d\n", num_of_chars);
	return (0);
}
