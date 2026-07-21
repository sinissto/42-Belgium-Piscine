#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*src_str;

	src_str = "Hello\nHow are you?";
	//printf("Before strlcpy: %s\n", src_str);
	ft_putstr_non_printable(src_str);
	//printf("After strlcpy: %s\n", src_str);
	return (0);
}
