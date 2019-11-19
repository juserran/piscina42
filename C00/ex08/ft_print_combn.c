#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int limit;
	int a[n];
	int x;
	int y;

	limit = 10 - n;
	x = 0;
	y = n - 1;
	if (n <= 0 || n >= 10)
		return;
	while (x < limit)
	{
		while (x <= y)
		{
			ft_print_combn(n - 1);
			ft_putchar(a[x]);
			++x;
		}
	++x;
	}
}
	

int	main(void)
{
	ft_print_combn(4);
	return(0);
}
