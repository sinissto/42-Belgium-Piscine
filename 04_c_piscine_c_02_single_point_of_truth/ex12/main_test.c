#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*src_str;

	src_str = "Hello\nHow are you?";
	//printf("Before strlcpy: %s\n", src_str);
	ft_print_memory(&src_str, 16);
	//printf("After strlcpy: %s\n", src_str);
	return (0);
}
