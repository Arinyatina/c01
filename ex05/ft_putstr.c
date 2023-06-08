#include <unistd.h>

void	ft_putstr(char *str)
{
	char	temp;

	while (*str > 0)
	{
		temp = *str;
		write(1, &temp, 1);
		str++;
	}
}
