#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	minus;

	minus = 45;
	if (nb < 0)
	{
		write(1, &minus, 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + '0';
		write(1, &nb, sizeof(int));
	}
}
