
#include <unistd.h>

void	ft_sepunte(int a)
{
	int tens;
	int unit;
	char ctens;
	char cunit;

	tens = a / 10;
	ctens = tens + '0';
	write(1, &ctens, 1);
	unit = a % 10;
	cunit = unit + '0';
	write(1, &cunit, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_sepunte(x);
			write(1, " ", 1);
			ft_sepunte(y);
			if (!(x == 98))
				write(1, ",", 1);
			if (!(x == 98))
				write(1, " ", 1);
			++y;
		}
		++x;
	}
}

int	main(void)
{
ft_print_comb2();
return(0);
}
