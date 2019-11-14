#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char a[11];
	int x;

	x = n;
	a[0] = '0';
	if(n <= 0 || n > 9)
		return;
	ft_value(n);
	while(a[0] <= n)
	{
		ft_print_combn(n - 1);
		if(!(a[x - 1] == n))
	}	
}

int	ft_value(int n)
{
	if (n == 1)
		return(9);
	else if (n == 2)
		return(8);
	else if (n == 3)
		return(7);
	else if (n == 4)
		return(6);
	else if (n == 5)
		return(5);
	else if (n == 6)
		return(4);
	else if (n == 7)
		return(3);
	else if (n == 8)
		return(2);
	else if (n == 9)
		return(1);
}

int	main(void)
{
	ft_print_combn(1);
	return(0);
}
