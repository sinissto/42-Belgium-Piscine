#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src_str;
	char dest_str[30];
	int	n;

	n = 5;
	src_str = "Thisdsd is test string";
	printf("%s\n", src_str);
	ft_strncpy(dest_str, src_str, n);
	printf("%s (%d)\n", dest_str, n);
	return (0);
}