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

int	ft_check_base(char *base, int len)
{
	int x;
	int y;

	x = 0;
	y = x + 1;
	while (base[x])
	{
		if (base[0] == '\0' || base[1] == '\0')
			return (1);
		else if (base[x] == '-' || base[x] == '+')
			return (2);
		while (y < len)
		{
			if (base[x] == base[y])
				return (3);
			++y;
		}
		++x;
	}
	return (0);
}

void	ft_print_nbr_base(int nbr, char *base, int len)
{
	int mod;

	mod = nbr % len;
	if (nbr >= len)
		ft_print_nbr_base(nbr / len, base, len);
	ft_putchar(base[mod]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;
	int go;

	len = ft_strlen(base);
	go = ft_check_base(base, len);
	if (go != 0)
		ft_putchar(go + 48);
	if (go == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		ft_print_nbr_base(nbr, base, len);
	}
}

int	main(void)
{
	int number;

	number = 8;
	ft_putnbr_base(number, "poniguay");
	return (0);
}
