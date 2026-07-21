#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*src_str;

	src_str = "Hello\nHow are you?\nGood!!!@Me too!";
	ft_print_memory(src_str, 36);
	return (0);
}
