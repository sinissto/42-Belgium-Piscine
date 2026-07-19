#include <unistd.h>

void	ft_putchar(char c);
char	select_char(int x, int y, int current_x, int current_y);
int		check_border(int x, int y, int current_x, int current_y);

void	rush(int x, int y)
{
	int		current_x;
	int		current_y;
	char	c;

	current_y = 1;
	while (current_y <= y)
	{
		current_x = 1;
		while (current_x <= x)
		{
			c = select_char (x, y, current_x, current_y);
			ft_putchar(c);
			current_x ++;
		}
		write (1, "\n", 1);
		current_y ++;
	}
}

char	select_char(int x, int y, int current_x, int current_y)
{
	char	c;

	c = '\0';
	if (check_border(x, y, current_x, current_y))
	{
		if (current_x == 1)
		{
			if (current_y == 1)
				c = 'o';		//sg
			if (current_y == y)
				c = 'o';		//ig
		}
		if (current_x == x)
		{
			if (current_y == 1)
				c = 'o';		//sd
			if (current_y == y)
				c = 'o';		//id
		}
		if (c == '\0')
		{
			if (current_x == 1 || current_x == x)
				c = '|';		//bg && bd
			if (current_y == 1 || current_y == y)
				c = '-';		//bs && bi
		}
	}
	else
		c = ' ';
	return (c);
}

int	check_border(int x, int y, int current_x, int current_y)
{
	if ((current_x == 1 || current_x == x))
		return (1);
	if ((current_y == 1 || current_y == y))
		return (1);
	else
		return (0);
}
