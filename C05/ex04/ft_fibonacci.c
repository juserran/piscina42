#include <stdio.h>

int	ft_fibonacci(int index)
{
	int num;
	int fib[index - 1];

	fib[0] = 0;
	fib[1] = 1;
	if (index < 0)
		return (-1);
	if (index >= 2)
	{
		fib[index] = fib[index - 1] + fib[index - 2];
		num = ft_fibonacci(index - 1);
	}
	return (num);
}

int	main(void)
{
	int z;

	z = ft_fibonacci(7);
	printf("El valor es %d\n", z);
	return (0);
}
