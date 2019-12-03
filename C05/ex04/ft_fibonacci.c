#include <stdio.h>

int	ft_fibonacci(int index)
{
	int num;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	if (index >= 0)
		num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (num);
}

int	main(void)
{
	int z;

	z = ft_fibonacci(4);
	printf("El valor es %d\n", z);
	return (0);
}
