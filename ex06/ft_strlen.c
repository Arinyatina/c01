int	ft_strlen(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str > 0)
	{
		str++;
		nbr++;
	}
	return (nbr);
}
