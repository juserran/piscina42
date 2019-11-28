#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     ft_strlen(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		++x;
		++str;
	}
	return(x);
}

int	ft_check_base(char *base)
{
	int x;
	int y;

	x = 0;
	y = x + 1;
	while (base[x])
	{
		if (base[0] == '\0' || base[1] == '\0')
			return (0);
		else if (base[x] == '-' || base[x] == '+')
			return (0);
		else if (base[x] < 32 || base[x] > 126)
			return (0);
		else if (base[x] == base[y])
			return (0);
		++x;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;
	int sign;

	sign = 1;
	ft_check_base(base);
	ft_strlen(base);
	len = ft_strlen(base);
	if (nbr)
	{
		if (nbr < 0)
		{
			sign *= -1;
			ft_putchar('-');
		}
		ft_putnbr_base(nbr / len, base);
		ft_putchar(nbr % len + '0');
	}
}

int	main(void)
{
	int number;

	number = 0;
	ft_putnbr_base(number, "0123456789");
	return (0);
}
