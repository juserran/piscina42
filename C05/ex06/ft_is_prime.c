#include <stdio.h>

int	ft_is_prime(int nb)
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

int	main(void)
{
	int z;

	z = ft_is_prime(6);
	if (z == 1)
	printf("El numero es primo! %d\n", z);
	else
	printf("Ooh! el numero no es primo! %d\n", z);
	return (0);
}
