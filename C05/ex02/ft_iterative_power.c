int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	while (power > 0)
	{
		res *= nb;
		--power;
	}
	return (res);
}
