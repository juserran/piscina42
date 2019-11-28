#include <unistd.h>

int	ft_atoi(char *str)
{
	int x;
	int num;
	int sign;

	x = 0;
	sign = 1;
	num = 0;
	if ((str[x] > 10 && str[x] < 14) || (str[x] == 32))
		++x;
	else if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			sign = -1;
		++x;
	}
	else if (str[x] > 47 && str[x] < 58)
	{
		while (str[x] != '\0')
		{
			num = (num * 10) + (str[x] - '0');
			write(1, &num, x);
			++x;
		}
		num *= sign;
	}
	return (num);
}

int	main(void)
{
	ft_atoi(" +-1490");
	return (0);
}
