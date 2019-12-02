int	ft_iterative_factorial(int nb)
{
	int res;
	int fact;

	res = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0) || (nb == 1)
		res = 1;
	while (fact <= nb)
	{
		res *= fact;
		++fact;
	}
	return (res);
}
