int	ft_recursive_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
