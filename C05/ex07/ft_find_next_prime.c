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
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int next;
	int check;
	
	next = nb + 1;
	check = ft_is_prime(next);	
	if (check == 0)
		ft_find_next_prime(nb + 1);
	return (check);
}

int	main(void)
{
	int z;

	z = ft_find_next_prime(7);
	printf("El siguiente numero primo es %d\n", z);
	return (0);
}
