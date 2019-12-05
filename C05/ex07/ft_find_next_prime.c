#include <stdio.h>

int     ft_is_prime(int nb)
{
	int x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (nb > x)
	{
		if (nb % x == 0)
			return (0);
		++x;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int check;
	int next;

	check = ft_is_prime(nb);
	if (check == 0)
	{
		next = ft_find_next_prime(nb + 1);
		return(next);
	}
	return (nb);
}

int	main(void)
{
	int z;

	z = ft_find_next_prime(114);
	printf("El numero primo es %d\n", z);
	return (0);
}
