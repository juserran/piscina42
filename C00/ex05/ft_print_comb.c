#include <unistd.h>

void	ft_print_comb(void)
{
	char a[5];

	a[0] = '0';
	a[3] = ',';
	a[4] = ' ';
	while(a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while(a[1] <= '8')
		{
			a[2] = a[1] +1;
			while(a[2] <= '9')
			{
				if (!(a[0] == '7' && a[1] == '8' && a[2] == '9'))
					write(1, a, 5);
				else
					write(1, a, 3);
				++a[2];
			}
			++a[1];
		}
		++a[0];
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
