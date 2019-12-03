#include <stdio.h>

int	ft_sqrt(int nb)
{
	int num;

	num = 0;
	if (nb % nb != 0) 
		return (0);
	while (num * num < nb)
	{
		++num;
		if (num * num == nb)
			return (num);
	}
	return (0);
}

int	main(void)
{
	int z;

	z = ft_sqrt(256);
	printf("La raiz cuadrada es %d\n", z);
	return (0);
}
