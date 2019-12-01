#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			ft_putnbr(147483648);
			return;
		}
		ft_putnbr(nb * -1);
	}
}

int	ft_atoi(char *str)
{
	int x;
	int num;
	int sign;

	x = 0;
	sign = 1;
	num = 0;
	while ((str[x] > 10 && str[x] < 14) || (str[x] == 32))
		++x;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			sign *= -1;
		++x;
	}
	while (str[x] > 47 && str[x] < 58)
	{
		num = (num * 10) + str[x] - 48;
		++x;
	}
	return (num * sign);
}

int	main(void)
{
	int atoi;

	atoi = ft_atoi("   ---+--1234ab567");
	ft_putnbr(atoi);
	return (0);
}
