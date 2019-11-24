void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conver_hex(char c)
{
	char *hex;

	hex = "0123456789abcdef";
	if (c > 16)
	{
		ft_conver_hex(c / 10);
		ft_conver_hex(c % 10);
	}
	else
		ft_putchar(hex[c]);
}

void	ft_putstr_non_printable(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 0 && str[x] <= 31) || str[x] == 127)
		{
			ft_putchar('\\');
			ft_conver_hex(str);
		}
		else
			ft_putchar(str[x]);
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
