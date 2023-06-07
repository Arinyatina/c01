#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int nb;

	nb = 10;
	// int *nbr = &nb;
	ft_ft(&nb);
	printf("%d\n", nb);
	return (0);
}