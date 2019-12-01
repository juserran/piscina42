#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *string)
{
	int x;

	x = 0;
	while (*string != '\0')
	{
		++x;
		++string;
	}
	return (x);
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

int    ft_print_nbr_base(int nbr, char *base, int len)
{
	int mod;

	mod = nbr % len;
	if (nbr >= len)
		ft_print_nbr_base(nbr / len, base, len);
	ft_putchar(base[mod]);
	return(base[mod]);
}

int	ft_clean_atoi(char *str)
{
	int x;
	int num;
	int sign;

	x = 0;
	sign = 1;

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


int	ft_atoi_base(char *str, char *base)
{
	int len;
	int go;
	int atoi;
	int res;

	len = ft_strlen(base);
	go = ft_check_base(base, len);
	atoi = ft_clean_atoi(str);
	if (go != 0)
	res = ft_print_nbr_base(atoi, base, len);
	return (res);
}

int	main(void)
{
	ft_atoi_base("  +--10", "01");
	return (0);
}
